#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

//HxWの迷路の(sx,sy)から(gx,gy)までの最短経路探索(BFS)
ll	H,W,sx,sy,gx,gy;				// mainで設定する
vector<string> maze(100);		// mainで設定する
ll dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
ll dc[100][100];
ll bfs() {
	queue<pair<ll,ll>> que;
	for(ll i=0;i<H;i++) for(ll j=0;j<W;j++) dc[i][j] = -1;
	que.push(make_pair(sx,sy));
	dc[sx][sy] = 0;
	while(que.size()) {
		pair<ll,ll> p = que.front(); que.pop();
		//cout << p.first << ',' << p.second << endl;
		if (p.first == gx && p.second == gy) break;
		for(int i=0;i<4;i++) {
			ll nx=p.first+dx[i] , ny=p.second+dy[i];
			if (0<=nx && nx<H && 0<=ny && ny<W && maze[nx][ny]!='#' && dc[nx][ny]==-1) {
				que.push(make_pair(nx,ny));
				dc[nx][ny] = dc[p.first][p.second] + 1;
			}
		}
	}
	return dc[gx][gy];
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> H >> W;
	for(i=0;i<H;i++) cin >> maze[i];
	sx = sy = 0;
	gx = H-1;
	gy = W-1;
	ans = bfs();
	if (ans != -1) {
		a = 0;
		for(i=0;i<H;i++) for(j=0;j<W;j++) if (maze[i][j]=='.') a++;
		ans = a - ans - 1;
	}
	cout << ans << endl;
	/*
	for(i=0;i<H;i++) {
		for(j=0;j<W;j++) cout << dc[i][j] << ' ';
		cout << endl;
	}
	*/
	return 0;
}

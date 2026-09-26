#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL -1

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z,sx,sy,gx,gy;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	vector<string>	g(h);
	vector<queue<pair<ll,ll>>> tl(256);

	for(i=0;i<h;i++) {
		cin >> g[i];
		for(j=0;j<w;j++) {
			if (g[i][j]=='S') {sx=i;sy=j;}
			if (g[i][j]=='G') {gx=i;gy=j;}
			if (g[i][j]>='a' && g[i][j]<='z') {
				tl[g[i][j]].push(make_pair(i,j));
			}
		}
	}

	queue<pair<ll,ll>> que;
	vector<vector<ll>>	d(h , vector<ll>(w,INFL));
	que.push(make_pair(sx,sy));
	d[sx][sy] = 0;

	ll dx[4] = {1,0,-1,0}, dy[4]={0,1,0,-1};

	while(que.size()) {
		pair<ll,ll> p = que.front(); que.pop();
		if (p.first==gx && p.second==gy) break;
		for(i=0;i<4;i++) {
			ll nx = p.first+dx[i], ny = p.second+dy[i];
			if (0<=nx && nx<h && 0<=ny && ny<w && g[nx][ny]!='#' && d[nx][ny]==INFL) {
				que.push(make_pair(nx,ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
		char tel=g[p.first][p.second];
		if (tel>='a' && tel<='z') {
			while(tl[tel].size()) {
				pair<ll,ll> pp = tl[tel].front(); tl[tel].pop();
				tie(i,j) = pp;
				if (g[i][j]==tel && d[i][j]==INFL) {
					que.push(make_pair(i,j));
					d[i][j] = d[p.first][p.second] + 1;
					//g[i][j] = '.';
				}
			}
		}
	}
	cout << d[gx][gy] << endl;
	return 0;
}

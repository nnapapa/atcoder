#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	ll		rs,cs,rt,ct,nx,ny;
	cin >> rs >> cs >> rt >> ct;
	rs--;
	cs--;
	rt--;
	ct--;
	vector<string>	S(h);
	for(i=0;i<h;i++) cin >> S[i];
	vector<vector<vector<ll>>>	dp2(h , vector<vector<ll>>(w, vector<ll>(4 , INFL)));

	ll dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
	queue<tuple<ll,ll,ll>> que;
	for(i=0;i<4;i++) {
		que.push(make_tuple(rs,cs,i));
		dp2[rs][cs][i] = 0;
	}
	while(que.size()) {
		tie(x,y,d) = que.front(); que.pop();
		//if (x==rt && y==ct) break;
		for(int i=0;i<4;i++) {
			nx = x+dx[i];
			ny = y+dy[i];
			if (0<=nx && nx<h && 0<=ny && ny<w && S[nx][ny]!='#') {
				for(int j=0;j<4;j++) {
					z = dp2[x][y][i];
					if (i!=j) z++;
					if (dp2[nx][ny][j]>z) {
						que.push(make_tuple(nx,ny,j));
						dp2[nx][ny][j] = z;
					}
				}
			}
		}
	}
	ans = min(dp2[rt][ct][0] , dp2[rt][ct][1]);
	ans = min(ans , dp2[rt][ct][2]);
	ans = min(ans , dp2[rt][ct][3]);
	cout << ans << endl;
	return 0;
}

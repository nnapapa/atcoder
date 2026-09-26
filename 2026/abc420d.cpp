#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z,gx,gy,xx,yy,mm;
	ll		ans = INFL;
	cin >> h >> w;
	vector<vector<ll>> di = { {0,1},{0,-1},{1,0},{-1,0} };
	vector<string>	A(h);
	vector<vector<vector<ll>>> B(h,vector<vector<ll>>(w, vector<ll>(2,INFL)));
	queue<tuple<ll,ll,ll>> que;
	for(i=0;i<h;i++) cin >> A[i];
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		if (A[i][j]=='S') {
			que.push(make_tuple(i,j,0));
			B[i][j][0] = 0;
		}
		if (A[i][j]=='G') {gx=i;gy=j;}
	}
	while(que.size()) {
		tie(x,y,m) = que.front();
		que.pop();
		c = B[x][y][m];
		m = A[x][y]=='?' ? (m+1)%2 : m;

		for(i=0;i<4;i++) {
			xx = x + di[i][0];
			yy = y + di[i][1];
			if (xx<0 || xx>=h || yy<0 || yy>=w) continue;
			if (B[xx][yy][m]==INFL && A[xx][yy]!='#' && A[xx][yy]!=(m==0 ? 'x' : 'o') ) {

				B[xx][yy][m] = c+1;
				que.push(make_tuple(xx,yy,m));
			}
		}
	}
	if (B[gx][gy][0]==INFL && B[gx][gy][1]==INFL) ans = -1;
	ans = min(ans , min(B[gx][gy][0],B[gx][gy][1]) );
	cout << ans << endl;

	for(x=0;x<0;x++)
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			cout << (B[i][j][x]==INFL ? -1 : B[i][j][x]) << ' ';
		}
		cout << endl;
	}
	return 0;
}

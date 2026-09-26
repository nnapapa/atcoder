#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w >> n >> m;
	vector<ll>	a(n),b(n);
	vector<vector<ll>>	blk(h , vector<ll>(w,0)),ah(h , vector<ll>(w,0)),aw(h , vector<ll>(w,0));
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	x = 0; y = 0;
	for(i=0;i<n;i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
	}

	for(i=0;i<m;i++) {
		cin >> c >> d;
		blk[c-1][d-1] = 1;
	}

	for(i=0;i<n;i++) {
		x = a[i];	y = b[i];
		while(x>=0 && ah[x][y]==0 && blk[x][y]==0) ah[x--][y] = 1;
		x = a[i]+1;	y = b[i];
		while(x<h && ah[x][y]==0 && blk[x][y]==0) ah[x++][y] = 1;
		x = a[i];	y = b[i];
		while(y>=0 && aw[x][y]==0 && blk[x][y]==0) aw[x][y--] = 1;
		x = a[i];	y = b[i]+1;
		while(y<w && aw[x][y]==0 && blk[x][y]==0) aw[x][y++] = 1;
	}

	for(i=0;i<h;i++) for(j=0;j<w;j++) if ((ah[i][j]==1)||(aw[i][j]==1)) ans++;
/*
	cout << endl;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) cout << ah[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) cout << aw[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) cout << blk[i][j] << " ";
		cout << endl;
	}
	cout << endl;
*/
	cout << ans << endl;
	return 0;
}

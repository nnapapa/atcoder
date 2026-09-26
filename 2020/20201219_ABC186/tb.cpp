#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	m = INFL;
	vector<vector<ll>> a(h,vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		cin >> a[i][j];
		m = min(m,a[i][j]);
	}
	for(i=0;i<h;i++) for(j=0;j<w;j++) ans += a[i][j]-m;

	cout << ans << endl;
	return 0;
}

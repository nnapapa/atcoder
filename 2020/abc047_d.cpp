#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,t,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> t;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	m = aa[0];
	x = 0;
	for(i=1;i<n;i++) {
		x = max(x , aa[i]-m);
		m = min(m , aa[i]);
	}
	m = aa[0];
	for(i=1;i<n;i++) {
		if (aa[i]-m == x) ans++;
		m = min(m , aa[i]);
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

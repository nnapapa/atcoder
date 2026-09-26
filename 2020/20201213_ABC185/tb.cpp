#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,t,j,k,l,m,v,w,x,y,z;
	ll		ans = 0;
	ll		n;
	string	s = "Yes";
	cin >> n >> m >> t;
	vector<ll>	a(m+1),b(m+1);
	for(i=1;i<=m;i++) cin >> a[i] >> b[i];
	c = n;
	b[0] = 0;
	for(i=1;i<=m;i++) {
		c -= a[i]-b[i-1];
		if (c<=0) { s = "No"; break; }
		c += b[i]-a[i];
		if (c>n) c = n;
	}
	c -= t-b[m];
	if (c<=0) s = "No";
 	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

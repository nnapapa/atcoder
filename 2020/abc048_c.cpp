#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x;
	vector<ll>	a(n);
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	if (a[0]>x) {
		ans = a[0] - x;
		a[0] = x;
	}
	for(i=1;i<n;i++) {
		if (a[i-1]+a[i]>x) {
			c = a[i];
			a[i] = x - a[i-1];
			ans += c - a[i];
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

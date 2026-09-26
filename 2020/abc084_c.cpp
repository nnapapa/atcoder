#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	vector<ll>	c(n),s(n),f(n);
	for(i=1;i<n;i++) cin >> c[i] >> s[i] >> f[i];

	for(i=1;i<=n;i++) {
		ans = 0;
		for(j=i;j<n;j++) {
			if (ans<s[j]) ans = s[j];
			if (ans % f[j]) ans += f[j] - (ans % f[j]);
			ans += c[j];
		}
		cout << ans << endl;
	}
	return 0;
}

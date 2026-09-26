#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;

	cin >> n >> x >> m;
	vector<ll>	lp(m,0);
	a = x;
	i = 1;
	while(lp[a]==0) {
		lp[a] = i++;
		a = a*a % m;
	}
	ll s = lp[a];
	ll e = i;
	ll lpcount = e - s;
	if (n<=e) {
		ans = a = x;
		for(i=2;i<=n;i++) ans += a = a*a % m;
	} else {
		a = x;
		if (s>1) ans = a;
		for(i=2;i<s;i++) ans += a = a*a % m;
		if (s==1) b = a;
		else b = a = a*a % m;
		for(i=s+1;i<e;i++) b += a = a*a % m;
		c = (n - s + 1) / lpcount;
		d = (n - s + 1) % lpcount;
		ans += b*c;
		for(i=s;i<s+d;i++) ans += a = a*a % m;
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll> R(n),C(n);
	ll		rmin,cmin,rmax,cmax;
	rmin = cmin = INFL;
	rmax = cmax = 0;
	for(i=0;i<n;i++) {
		cin >> R[i] >> C[i];
		rmin = min(rmin,R[i]);
		rmax = max(rmax,R[i]);
		cmin = min(cmin,C[i]);
		cmax = max(cmax,C[i]);
	}
	r = (rmax - rmin + 1)/2;
	c = (cmax - cmin + 1)/2;
	ans = max(ans , max(r,c));
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = INFL;
	cin >> n;
	map<ll,ll> s,ms;
	s[0] = INFL;
	s[INFL] = INFL;
	ms[0] = 1;
	for(i=1;i<=n;i++) { 
		cin >> x;
		r = s.upper_bound(x)->first;
		l = -1 * ms.upper_bound(-1*x)->first;
		if (x-l < s[l]) {
			ans += x-l - s[l];
			s[l] = x-l;
		}
		if (r!=INFL) {
			if (r-x < s[r]) {
				ans += r-x - s[r];
				s[r] = r-x;
			}
			ans += s[x] = min(x-l,r-x);
		} else {
			ans += s[x] = x-l;
		}
		ms[-1*x] = 1;
		cout << ans << endl;
	}
	return 0;
}

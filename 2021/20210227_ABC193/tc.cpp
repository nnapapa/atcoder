#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

// 繰り返し二乗法 (xのn乗)
ll pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	map<ll,ll> q;
	for(i=2;i<=sqrt(n)+1;i++) {
		for(j=2;1;j++) {
			a = pow(i,j);
			if (a<=n) q[a] = 1;
			else break;
		}
	}
	ans = n - q.size();

	cout << ans << endl;
	return 0;
}

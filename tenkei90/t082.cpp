#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 1000000007

ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

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
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> l >> r;
	for(i=1;i<=18;i++) {
		ll i0 = pow(10 , i-1);
		ll i9 = pow(10 , i);
		i9--;
		//cout << (ll)pow(10 , i-1) << " " << (ll)pow(10 , i) << " " << i0 << " " << i9 << endl;
		if (r<i0) break;
		if (l>i9) continue;
		if (l>i0) i0 = l;
		if (r<i9) i9 = r;
		i0--;
		i0 %= MOD;
		if (i0<0) i0 += MOD;
		i9 %= MOD;
		//ans = (a % MOD) * modinv(b, MOD) % MOD;
		ans += (((i9*(i9+1)) % MOD) * modinv( 2 , MOD) % MOD) * i % MOD;
		ans %= MOD;
		ans -= (((i0*(i0+1)) % MOD) * modinv( 2 , MOD) % MOD) * i % MOD;
		if (ans < 0 ) ans += MOD;
		//cout << ans << endl;
	}

	if (r==1000000000000000000LL) {
		ans += (1000000000000000000LL % MOD) * 19 % MOD;
		ans % MOD;
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
/* 最大公約数 (ユークリッドの互除法) */
ll gcd(ll m, ll n) {
	ll temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}


// ans = a ÷ b mod. MOD
// ans = (a % MOD) * modinv(b, MOD) % MOD;
const int MOD = 1000000007;
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
/* 最小公倍数 */
ll lcm(ll m, ll n) {
	ll a = m*n;
	ll b = gcd(m,n);
	return (a%MOD) * modinv(b,MOD) % MOD;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	x = aa[0];
	for(i=1;i<n;i++) x = lcm(x,aa[i]);
	for(i=0;i<n;i++) {
		a = x;
		b = aa[i];
		ans += (a % MOD) * modinv(b, MOD) % MOD;
		ans %= MOD;
	}

	cout << ans << endl;
	return 0;
}

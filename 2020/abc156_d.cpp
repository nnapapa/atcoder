#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
// 繰り返し二乗法 (xのn乗 % MOD)
// x,nに指定する固定値はLLをつけること(2^nのとき、2でWA、2LLでAC)
const ll MOD = 1000000007LL;
ll modpow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n = n / 2
    }
    return ret;
}
// ans = a ÷ b mod. MOD
// ans = (a % MOD) * modinv(b, MOD) % MOD;
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
//階乗(n! %MODあり)
ll calcProductmod(ll n) {
  ll ret = 1;
  for(ll i=n;i>0;i--) ret = ret * i % MOD;
  return ret;
}
//nPr 順列計算(n!/(n-r)!  %MODあり)
ll nPrmod(ll n, ll r) {
  ll ret = 1;
	for(ll i=n;i>(n-r);i--) ret = ret * i % MOD;
	return ret;
}
//nCr 組み合わせ計算(nPr/r! %MODあり)
ll nCrmod(ll n, ll r) {
  return nPrmod(n,r) * modinv(calcProductmod(r), MOD) % MOD;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> a >> b;
	ans = (modpow(2,n)+MOD-1)%MOD;
	ans = (ans + MOD - nCrmod(n,a)) % MOD;
	ans = (ans + MOD - nCrmod(n,b)) % MOD;

	cout << ans << endl;
	return 0;
}

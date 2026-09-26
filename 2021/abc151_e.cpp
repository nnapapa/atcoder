#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
//nCr 組み合わせ計算(%MODあり) 高速版
const int MAX = 600000;
const int MOD = 1000000007;
ll fac[MAX], finv[MAX], inv[MAX];
// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
// nCr計算
ll COM(ll n, ll r){
    if (n < r) return 0;
    if (n < 0 || r < 0) return 0;
    return fac[n] * (finv[r] * finv[n - r] % MOD) % MOD;
}


int main() {
	ll		b,c,d,h,i,j,k,l,n,v,w,x,y,z;
	ll		m = 0 , ans = 0;
	COMinit();
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	for(i=0;i<n;i++) {
		m += COM(n-i-1,k-1)*A[i]%MOD;
		m %= MOD;
	}
	for(i=0;i<n;i++) {
		ans += COM(i,k-1)*A[i]%MOD;
		ans %= MOD;
	}
	ans = (ans + MOD - m) % MOD;

	cout << ans << endl;
	return 0;
}

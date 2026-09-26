//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
//nCr 組み合わせ計算(%MODあり) 高速版
const int MAX = 3000000;
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
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	COMinit();
	cin >> x >> y;
	bool	f = false;
	for(i=0;i<=x;i++) {
		a = i;
		b = i*2;
		if ((x-a)&1) continue;
		j = (x-a)/2;
		if (y-b==j) {
			f = true;
			break;
		}
	}
	if (f) cout << COM(i+j,j) << endl;
	else cout << 0 << endl;
	return 0;
}

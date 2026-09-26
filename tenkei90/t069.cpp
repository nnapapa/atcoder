#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

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

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> k;
	ans = k;
	if (n>=2) ans = ans * (k-1) % MOD;
	if (n>=3) {
		ans = modpow( (k-2) , (n-2) ) * ans % MOD;
	}

	cout << ans << endl;
	return 0;
}

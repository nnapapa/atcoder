#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
// 繰り返し二乗法 (xのn乗 % MOD)
// x,nに指定する固定値はLLをつけること(2^nのとき、2でWA、2LLでAC)
const long long MOD = 1000000007LL;
long long modpow(long long x, long long n) {
    long long ret = 1;
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
	string	s;
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	for(b=0;b<=60;b++) {
		x = y = 0;
		for(i=0;i<n;i++) {
			if ((1LL<<b)&aa[i]) x++;
			else y++;
		}
		ans += (x*y%MOD) * modpow(2,b) % MOD;
		ans %= MOD;
		//cout << b << ":" << x << " " << y << " " << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

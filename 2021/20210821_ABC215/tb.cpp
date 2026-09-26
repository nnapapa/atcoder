#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
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
	ll		b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	lll		a;
	string	s;
	cin >> n;
	a = 1;
	while(1) {
		if (a<=n) {
			a *= 2;
			ans++;
		} else break;
	}
		
	cout << ans-1 << endl;
	return 0;
}

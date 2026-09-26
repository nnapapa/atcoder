#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

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
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double		a, ans = 0;
	string	s;
	cin >> n;
	i = 1;
	while(1) {
		a = (double)i / pow(n,i); 
		if (a<0.0000000001) break;
		ans += a;
		i++;
	}

	printf("%.10f\n",ans);
	//cout << ans << endl;
	return 0;
}

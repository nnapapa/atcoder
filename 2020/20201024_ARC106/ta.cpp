#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = -1;
	string	s;
	cin >> n;
	a = 1;
	for(i=1;i<50;i++) {
		a *= 3;
		if (a>n) break;
		b = 1;
		for(j=1;j<50;j++) {
			b *= 5;
			if (a + b > n) break;
			if (a+b == n) {
					ans = i;
					x   = j;
					break;
			}
		}
		if (ans != -1) break;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	if (ans == -1) cout << ans << endl;
	else cout << ans << " " << x << endl;
	return 0;
}

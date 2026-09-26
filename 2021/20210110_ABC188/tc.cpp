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
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	x = pow(2,n);
	vector<ll>	AA(x),II(x,0);
	for(i=0;i<x;i++) {
		cin >> AA[i];
		II[i] = i;
	}
	while (x>1) {
		//printf("%d : ",x);
		//for(i=0;i<x;i++) printf("%d-%d ",II[i],AA[i]);
		//printf("\n");
		for(i=0;i<x;i+=2) {
			j = i/2;
			if (AA[i]>AA[i+1]) {
				ans = II[i+1];
				AA[j] = AA[i];
				II[j] = II[i];
			} else {
				ans = II[i];
				AA[j] = AA[i+1];
				II[j] = II[i+1];

			}
		}
		x /= 2;
	}
	cout << ans+1 << endl;
	return 0;
}

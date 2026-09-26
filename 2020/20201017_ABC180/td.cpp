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
	ll		ans = 0;
	string	s;
	cin >> x >> y >> a >> b;
	ans = x;
	c = 0;
	while(1) {
		if ((double)x*a > x+b) break;
		if ((double)x*a >= y) break;
		x = x*a;
		c++;
	}
	//cout << x << ' ' << c << endl;
	c += (y - x - 1)/b;

	cout << c << endl;
	return 0;
}

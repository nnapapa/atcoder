#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}
// ans = a € b mod. MOD 
// ans = (a%MOD) * modinv(b, MOD) % MOD

long long f(int x) {
	if (x == 0) return 1;
	if (x == 1) return 2;
	long long t = f(x/2);
	return ((t*t)%MOD)*f(x%2)%MOD;
}

int main() {
	int a,b,i,j,n;
	long long		c,k,m,x,y,ans = 0;
	string	str;
	
	cin >> n >> a >> b;

	c = f(n) - 1;
	
	x = y = 1;
	for(i=1,j=n;i<=a;i++,j--) {
		x = x * j % MOD;
		y = y * i % MOD;
	}
	ans = (x % MOD) * modinv(y, MOD) % MOD;
	
	x = y = 1;
	for(i=1,j=n;i<=b;i++,j--) {
		x = x * j % MOD;
		y = y * i % MOD;
	}
	ans += (x % MOD) * modinv(y, MOD) % MOD;
	
	c = c - ans;
	if (c<0) c += MOD;
	
	cout << c << endl;


}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

const int MOD = 1000000007;
long long pow(long long x, long long n) {
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
	//string	s;
	cin >> h >> w;

	vector<string>	s(h);
	for(i=0;i<h;i++) cin >> s[i];
	vector<vector<ll>> ch(h , vector<ll>(w,0)),cw(h , vector<ll>(w,0));

	// make cw
	for(i=0;i<h;i++) {
		b = c = 0;
		for(j=0;j<w;j++) {
			if (s[i][j]=='.') {
				c++;
			} else {
				b = c;
				while(b!=0) cw[i][j-b--] = c;
				b = c = 0;
			}
		}
		b = c;
		while(b!=0) cw[i][j-b--] = c;
	}

	// make ch
	for(j=0;j<w;j++) {
		b = c = 0;
		for(i=0;i<h;i++) {
			if (s[i][j]=='.') {
				c++;
			} else {
				b = c;
				while(b!=0) ch[i-b--][j] = c;
				b = c = 0;
			}
		}
		b = c;
		while(b!=0) ch[i-b--][j] = c;
	}

	k = 0;
	for(i=0;i<h;i++) for(j=0;j<w;j++) if (s[i][j]=='.') k++;
	ans = (ll)(pow(2,k)*k) % MOD;



	c = 0;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			a = cw[i][j] + ch[i][j] - 1;
			c = (ll)(c + pow(2,k-a)) % MOD;
		}
	}

	ans = ( MOD + ans - c ) % MOD;

	cout << ans << endl;
	return 0;
}

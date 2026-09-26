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
	string	s;
	cin >> n;
	//vector<ll>	a(n);
	map<ll,ll>	ab;
	for(i=0;i<n;i++) {
		cin >> a;
		ab[a]++;
	}
	if (n%2) x = 0;
	else x = 1;
	bool f = true;
	for(auto p : ab) {
		if (p.first != x) { f = false; break; }
		if (x == 0) {
			if (p.second != 1) { f = false; break; }
		} else {
			if (p.second != 2) { f = false; break; }
		}
		x += 2;
	}
	if (f) {
		n = 20653;
		ans = pow(2LL , n/2);
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	//ans = pow(2LL , 10326LL);
	//cout << ans << endl;
	return 0;
}

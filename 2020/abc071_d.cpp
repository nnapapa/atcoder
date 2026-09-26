#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
const long long MOD = 1000000007;
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s,t;
	cin >> n;
	cin >> s >> t;
	ll		pre = 0;
	for(x=0;x<n;x++) {
		if (s[x]==t[x]) {
			if (pre==0) ans = 3;
			if (pre==1) ans = ans * 2 % MOD;
			pre = 1;
		}
		if (s[x]!=t[x]) {
			if (pre==0) ans = 6;
			if (pre==1) ans = ans * 2 % MOD;
			if (pre==2) ans = ans * 3 % MOD;
			pre = 2;
			x++;
		}
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MD 998244353

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll> A(n), B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	vector<vector<ll>>	dp(n , vector<ll>(3001,0));
	for(a=0;a<=3000;a++) if (a>=A[0] && a<=B[0]) dp[0][a] = 1;
	for(i=1;i<n;i++) {
		z = 0;
		ans = 0;
		for(a=0;a<=3000;a++) {
			z += dp[i-1][a];
			if ( (a>=A[i]) && (a<=B[i]) ) {
				dp[i][a] = z;
				dp[i][a] %= MD;
			}
			ans += dp[i][a];
			ans %= MD; 
		}
	}
	cout << ans << endl;
	return 0;
}

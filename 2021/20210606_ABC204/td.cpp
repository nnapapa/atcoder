#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<ll>	T(n);
	for(i=0;i<n;i++) cin >> T[i];
	for(i=0,x=0;i<n;i++) x+=T[i];

	vector<vector<ll>>	dp(n+1 , vector<ll>(100000,0));
	for(i=0;i<n;i++) {
		for(j=0;j<=x/2;j++) {
			if (j<T[i]) {
				dp[i+1][j] = dp[i][j];
			} else {
				dp[i+1][j] = max(dp[i][j], dp[i][j-T[i]] + T[i]);
			}
		}
	}
	ans = x - dp[n][x/2];
	cout << ans << endl;
	return 0;
}

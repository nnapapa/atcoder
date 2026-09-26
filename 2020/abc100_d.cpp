#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,xx,yy,zz;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	x(n+1),y(n+1),z(n+1);
	for(i=1;i<=n;i++) cin >> x[i] >> y[i] >> z[i];
	vector<vector<vector<ll>>>	dp(n+1, vector<vector<ll>>(m+1, vector<ll>(3,0)));
	for(i=1;i<=n;i++) {
		for(j=1;j<=min(i,m);j++) {
			a = abs(dp[i-1][j-1][0] + x[i]) + abs(dp[i-1][j-1][1] + y[i]) + abs(dp[i-1][j-1][2] + z[i]);
			b = abs(dp[i-1][j][0]) + abs(dp[i-1][j][1]) + abs(dp[i-1][j][2]);
			if (a >= b) {
				dp[i][j][0] = dp[i-1][j-1][0] + x[i];
				dp[i][j][1] = dp[i-1][j-1][1] + y[i];
				dp[i][j][2] = dp[i-1][j-1][2] + z[i];
			} else {
				dp[i][j][0] = dp[i-1][j][0];
				dp[i][j][1] = dp[i-1][j][1];
				dp[i][j][2] = dp[i-1][j][2];
			}
		}
	}
	/*
	for(i=0;i<=n;i++) {
		for(j=0;j<=m;j++) {
			printf("[%2d %2d %2d] ",dp[i][j][0],dp[i][j][1],dp[i][j][2]);
		}
		cout << endl;
	}
	*/
	cout << abs(dp[n][m][0])+abs(dp[n][m][1])+abs(dp[n][m][2]) << endl;
	return 0;
}

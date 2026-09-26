//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
#define chmax(x , y) (x) = max((x) , (y))

int main() {
	ll		a,b,r,c,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	cin >> r >> c >> k;
	vector<vector<ll>> v(r+1 , vector<ll>(c+1));
	for(i=0;i<k;i++) {
		cin >> x >> y;
		cin >> v[x][y];
	}
	vector<vector<vector<ll>>>  dp(r+2, vector<vector<ll>>(c+2, vector<ll>(4)));

	for(i=1;i<=r;i++) {
		for(j=1;j<=c;j++) {
			chmax(dp[i][j][0] , dp[i][j-1][0]);
			chmax(dp[i][j][1] , dp[i][j-1][1]);
			chmax(dp[i][j][2] , dp[i][j-1][2]);
			chmax(dp[i][j][3] , dp[i][j-1][3]);
			if (v[i][j]>0) {
				chmax(dp[i][j][1] , dp[i][j-1][0] + v[i][j]);
				chmax(dp[i][j][2] , dp[i][j-1][1] + v[i][j]);
				chmax(dp[i][j][3] , dp[i][j-1][2] + v[i][j]);
			}
			chmax(dp[i][j][0] , dp[i-1][j][0]);
			chmax(dp[i][j][0] , dp[i-1][j][1]);
			chmax(dp[i][j][0] , dp[i-1][j][2]);
			chmax(dp[i][j][0] , dp[i-1][j][3]);
			if (v[i][j]>0) {
				chmax(dp[i][j][1] , dp[i-1][j][0] + v[i][j]);
				chmax(dp[i][j][1] , dp[i-1][j][1] + v[i][j]);
				chmax(dp[i][j][1] , dp[i-1][j][2] + v[i][j]);
				chmax(dp[i][j][1] , dp[i-1][j][3] + v[i][j]);
			}
		}
	}
	ans = dp[r][c][0];
	chmax(ans , dp[r][c][1]);
	chmax(ans , dp[r][c][2]);
	chmax(ans , dp[r][c][3]);
	cout << ans << endl;
/*
	for(k=0;k<=3;k++) {
		cout << k << ':' << endl;
		for(i=1;i<=r;i++) {
			for(j=1;j<=c;j++) {
				cout << dp[i][j][k] << ' ';
			}
			cout << endl;
		}
	}
*/
	return 0;
}

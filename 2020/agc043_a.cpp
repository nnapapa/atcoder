#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> h >> w;
	vector<string>	s(h);
	for(i=0;i<h;i++) cin >> s[i];
	vector<vector<ll>>	dp(h , vector<ll>(w,INFL));
	if (s[0][0]=='.') dp[0][0] = 0;
	else dp[0][0] = 1;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			if (i==0 && j==0) continue;
			if (j>0) {
				dp[i][j] = dp[i][j-1] + (s[i][j-1]=='.' && s[i][j]=='#');
			}
			if (i>0) {
				dp[i][j] = min(dp[i][j], dp[i-1][j] + (s[i-1][j]=='.' && s[i][j]=='#'));
			}
		}
	}
	cout << dp[h-1][w-1] << endl;
	return 0;
}

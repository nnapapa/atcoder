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
	cin >> k;
	vector<ll>	dp(k+1,0);
	dp[0] = dp[1] = 1;
	if (k%9==0) {
		for(i=2;i<=k;i++) {
			for(j=1;j<=9;j++) {
				if (i-j<0) break;
				dp[i] += dp[i-j];
				dp[i] %= 1000000007;
			}
		}
		ans = dp[k];
	}

	//for(i=0;i<=k;i++) cout << dp[i] << endl;

	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

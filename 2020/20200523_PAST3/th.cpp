//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,l,n,m,y,ni,ndp;
	string	s;
	cin >> n >> l;
	vector<int>	x(l+10);
	for(i=0;i<n;i++) {
		cin >> j;
		x[j] = 1;
	}
	int		t1,t2,t3;
	cin >> t1 >> t2 >> t3;
	vector<ll>	dp(l+10,INFL);
	dp[0] = 0;
	for(i=0;i<l;i++) {
		//1
		ni = i+1;
		ndp = dp[i]+t1 + x[ni]*t3;
		dp[ni] = min(dp[ni], ndp);
		//2
		if (i+2<=l) {
			ni = i+2;
			ndp = dp[i]+t1+t2 + x[ni]*t3;
			dp[ni] = min(dp[ni], ndp);
		} else {
			ni = i+1;
			ndp = dp[i]+t1/2+t2/2;
			dp[ni] = min(dp[ni], ndp);
		}
		//3
		if (i+4<=l) {
			ni = i+4;
			ndp = dp[i]+t1+t2*3 + x[ni]*t3;
			dp[ni] = min(dp[ni], ndp);
		} else if (i+3==l) {
			ni = i+3;
			ndp = dp[i]+t1/2+t2*2+t2/2;
			dp[ni] = min(dp[ni], ndp);
		} else if (i+2==l) {
			ni = i+2;
			ndp = dp[i]+t1/2+t2+t2/2;
			dp[ni] = min(dp[ni], ndp);
		} else {
			ni = i+1;
			ndp = dp[i]+t1/2+t2/2;
			dp[ni] = min(dp[ni], ndp);
		}

	}
	//for(i=0;i<=l;i++) cout << dp[i] << endl;
	cout << dp[l] << endl;
	return 0;
}

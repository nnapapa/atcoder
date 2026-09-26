#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<ll>	dp(2001,0);
	dp[3] = 1;
	for(i=4;i<=n;i++) {
		dp[i] = dp[i-1] + dp[i-3];
		dp[i] %= 1000000007;
	}

	cout << dp[n] << endl;
	return 0;
}

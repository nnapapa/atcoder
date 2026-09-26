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
	cin >> n >> l;
	vector<ll>	dp(n+1,0);
	dp[0] = 1;
	for(i=1;i<=n;i++) {
		dp[i] = dp[i-1];
		if (i-l>=0) dp[i]+=dp[i-l];
		dp[i] %= 1000000007;
	}

	cout << dp[n] << endl;
	return 0;
}

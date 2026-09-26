#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	vector<ll>	dp(n+1,INFL);
	dp[0] = 0;
	dp[1] = abs(aa[0]-aa[1]);
	for(i=2;i<n;i++) {
		dp[i] = min(dp[i-1]+abs(aa[i-1]-aa[i]) , dp[i-2]+abs(aa[i-2]-aa[i]));
	}

	cout << dp[n-1] << endl;
	return 0;
}

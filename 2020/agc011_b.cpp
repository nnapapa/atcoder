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
	sort(aa.begin(),aa.end());
	vector<ll>	dp(n);
	dp[0] = aa[0];
	for(i=1;i<n;i++) dp[i] = dp[i-1] + aa[i];
	for(i=n-2;i>=0;i--) {
		if (aa[i+1]>dp[i]*2) break;
	}
	ans = n - i - 1;
	cout << ans << endl;
	return 0;
}

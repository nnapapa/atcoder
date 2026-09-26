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
	cin >> n >> m;
	vector<ll>	A(n+2,0);
	for(i=1;i<=n;i++) cin >> A[i];
	map<ll,vector<ll>> yx;
	for(i=0;i<m;i++) {
		cin >> x >> y;
		yx[y].push_back(x);
	}
	vector<ll>	dp(n+2,INFL);
	for(i=1;i<=n;i++) {
		for(j=0;j<yx[i].size();j++) {
			x = yx[i][j];
			dp[i] = min(dp[i] , A[x]); 
			dp[i] = min(dp[i] , dp[x]); 
		} 
	}
	ans = -INFL;
	for(i=2;i<=n;i++) {
		ans = max(ans , A[i] - dp[i]);
	}
	cout << ans << endl;
	return 0;
}

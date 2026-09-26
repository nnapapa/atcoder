#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll>	dp(100001,0);
vector<vector<ll>>	hen(100001);
void dfs(ll i , ll mae) {
	if (dp[i]!=0) return;
	dp[i] = 1;
	for(int k=0;k<hen[i].size();k++) {
		if (hen[i][k]!=mae) {
			dfs(hen[i][k] , i);
			dp[i] += dp[hen[i][k]];
		}
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	
	for(i=0;i<n-1;i++) {
		cin >> a >> b;
		hen[a].push_back(b);
		hen[b].push_back(a);
	}

	dfs(1,0);
	//for(i=1;i<=n;i++) cout << i << " " << dp[i] << endl;
	for(i=2;i<=n;i++) {
		ans += dp[i]*(n-dp[i]);
	}
	cout << ans << endl;
	return 0;
}

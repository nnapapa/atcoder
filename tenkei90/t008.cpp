#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string	s,at;
vector<vector<ll>> dp(8,vector<ll>(100001,0));

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	at = " atcoder";
	cin >> n >> s;
	for(j=0;j<=n;j++) dp[0][j] = 1;
	for(i=1;i<=7;i++) {
		for(j=1;j<=n;j++) {
			if (s[j-1]==at[i]) dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000007;
			else dp[i][j] = dp[i][j-1];
		}

	}
	cout << dp[7][n] << endl;
	return 0;
}


/*
string	s,at;
vector<vector<ll>> memo(100001,vector<ll>(7,-1));

ll calc(int index, int c) {
	ll ret = 0;
	if (memo[index][c]!=-1) return memo[index][c];
	if (c==6) {
		for(ll i=index;i<s.size();i++) if (s[i]==at[c]) ret++;
		return memo[index][c] = ret;
	}
	ll a = 0;
	for(ll i=index;i<s.size();i++) {
		if (s[i]==at[c]) a++;
		else if (c<6 && s[i]==at[c+1]) {
			if (a>0) {
				ll b = calc(i , c+1);
				ret += a * b % 1000000007;
				ret %= 1000000007;
				a = 0;
				if (b==0) break;
			}
		}
	}
	return memo[index][c] = ret;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	at = "atcoder";
	cin >> n >> s;
	cout << calc(0,0) << endl;
	return 0;
}
*/
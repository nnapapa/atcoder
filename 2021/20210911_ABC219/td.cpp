#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> x >> y;
	vector<ll> A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i] >> B[i];
	vector<vector<vector<ll>>>	dp(n+1 , vector<vector<ll>>(x+1 , vector<ll>(y+1,INFL) ));
	dp[0][0][0] = 0;
	for(i=0;i<n;i++) {
		for(a=0;a<=x;a++) for(b=0;b<=y;b++) {
			dp[i+1][a][b] = min(dp[i+1][a][b] , dp[i][a][b]);	//買わない
			dp[i+1][min(x,a+A[i])][min(y,b+B[i])] = min(dp[i+1][min(x,a+A[i])][min(y,b+B[i])] , dp[i][a][b]+1);
		}
	}
	if (dp[n][x][y]>=INFL) dp[n][x][y] = -1;
	cout << dp[n][x][y] << endl;
	return 0;
}

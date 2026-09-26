#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 998244353LL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	cin >> n;
	vector<ll>	A(n+1);
	for(i=0;i<n;i++) cin >> A[i];
	vector<vector<ll>>	dp(n+1 , vector<ll>(10,0));
	//vector<vector<vector<ll>>>	dp3(n+1 , vector<vector<ll>>(10, vector<ll>(10, 0)));
	dp[0][A[0]] = 1;
	for(i=0;i<n;i++) for(j=0;j<10;j++) {
		x = (j + A[i+1]) % 10;
		dp[i+1][x] += dp[i][j];
		dp[i+1][x] = dp[i+1][x] % MOD;

		x = (j * A[i+1]) % 10;
		dp[i+1][x] += dp[i][j];
		dp[i+1][x] = dp[i+1][x] % MOD;
	}
	/*for(i=0;i<n;i++) {
		cout << "DBG: ";
		for(j=0;j<10;j++) cout << dp[i][j] << " ";
		cout << endl;
	}*/
	for(i=0;i<10;i++) cout << dp[n-1][i] << endl;
	return 0;
}

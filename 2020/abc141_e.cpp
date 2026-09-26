#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
typedef long long ll;

int dp[5005][5005] = {0};

int main() {
	int n,ans = 0;
	string s;
	
	cin >> n >> s;
	
	for(int i= n-1; i>=0; i--) {
		for(int j= n-1; j>=0; j--) {
			if (s[i] != s[j]) dp[i][j] = 0;
			else dp[i][j] = dp[i+1][j+1] + 1;
		}
	}
	
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			int k = min(dp[i][j] , j-i);
			ans = max(ans , k);
		}
	}

	cout << ans << endl;
}


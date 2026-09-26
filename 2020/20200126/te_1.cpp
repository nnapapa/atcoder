#include <bits/stdc++.h>
using namespace std;

int main() {
	int		c,i,j,k,h,n,m,x,y,ans = 0;
	
	cin >> h >> n;
	vector<int> a(n);
	vector<int> b(n);
	for(i=0; i<n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<int>	dp(h+1,0x7fffffff); 
	dp[0] = 0;

	for(i=0; i<=h; i++) {
		if (dp[i] == 0x7fffffff) continue;
		for(j=0; j<n; j++) {
			c = min(h, i+a[j]);
			dp[c] = min(dp[c] , dp[i]+b[j]);
		}
	}
	cout << dp[h] << endl;


}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	vector<ll>	dp(n+1),an(n+1);
	for(i=0;i<n;i++) dp[i+1] = dp[i] + aa[i];
	for(i=k;i<=n;i++) {
		an[i] = dp[i] - dp[i-k];
	}
	for(i=k+1;i<=n;i++) {
		if (an[i-1] < an[i]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
//	cout << ans << endl;
	return 0;
}

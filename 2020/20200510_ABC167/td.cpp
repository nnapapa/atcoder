//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	cin >> n >> k;
	vector<ll> a(n+1);
	for(i=1;i<=n;i++) {
		cin >> a[i];
	}
	vector<ll>	dp(n+1 , -1);
	dp[1] = 0;
	ll pre = 1;
	ll cnt = 0;
	while(dp[a[pre]]==-1) {
		dp[a[pre]] = ++cnt;
		pre = a[pre];
	}
	ll lp = dp[a[pre]];
	ll end = cnt+1;
	/*
	cout << "DBG:" << lp << ' ' << end << endl << "DP:";
	for(i=1;i<=n;i++) cout << dp[i];
	cout << endl;
	*/
	ll lpcnt = end - lp;

	if (k >= lp) {
		k = (k-lp)%lpcnt + lp;
	}
	//cout << "DBG:" << k << endl;
	ans = 1;
	for(i=0;i<k;i++) {
		ans = a[ans];
	}

	cout << ans << endl;
	return 0;
}

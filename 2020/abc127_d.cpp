//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

void ppp(vector<ll> dp, ll n) {
	return ;
	cout << "DBG ";
	for(int i=0;i<n;i++) {
		cout << dp[i] << ' ';
	}
	cout << endl;
}
int main() {
	ll		c,i,j,k,n,m,x,y,ans = 0;

	cin >> n >> m;
	vector<ll> a(n),dp(n),b(n);

	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	vector<pair<ll,ll>> cb(m);
	
	for(i=0;i<m;i++) {
		cin >> cb[i].second >> cb[i].first;
	}
	sort(cb.begin(), cb.end());
	x = m-1;
	y = cb[x].second;
	for(i=0;i<n;i++) {
		dp[i] = cb[x].first;
		if (--y == 0) {
			y = cb[--x].second;
		}
	}
	ppp(a, n);
	ppp(dp , n);

	i = x = 0;
	for(j=0;j<n;j++) {
		if (dp[x] > a[i]) {
			b[j] = dp[x++];
		} else {
			b[j] = a[i++];
		}
	}
	for(i=0;i<n;i++) {	
		ans += b[i];
	}

	ppp(a, n);


  	cout << ans << endl;
	return 0;
}

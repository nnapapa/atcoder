//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> k;
	vector<ll>	dp(n+1);

	for(i=0;i<k;i++) {
		cin >> d;
		for(j=0;j<d;j++) {
			cin >> a;
			dp[a] = 1;
		}
	}
	for(i=1;i<=n;i++) {
		if (dp[i]==0) ans++;
	}

	cout << ans << endl;

}

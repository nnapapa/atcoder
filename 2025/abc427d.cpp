#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;

	cin >> n >> m >> k;
	cin >> s;
	vector<vector<ll>> uv(n);
	for(i=0;i<m;i++) {
		cin >> u >> v;
		u--; v--;
		uv[u].push_back(v);
	}
	vector<vector<ll>> dp(2*k+1, vector<ll>(n));
	for(i=0;i<n;i++) {
		if (s[i]=='A') dp[2*k][i] = 1; else dp[2*k][i] = 0;
	}
	for(z=2*k-1; z>=0; z--) {
		if (z%2) {
			//turn B
			for(i=0;i<n;i++) {
				dp[z][i] = 1;
				for(j=0;j<uv[i].size();j++) {
					if (dp[z+1][uv[i][j]]==0) dp[z][i] = 0;
				}
			}
		} else {
			//turn A
			for(i=0;i<n;i++) {
				dp[z][i] = 0;
				for(j=0;j<uv[i].size();j++) {
					if (dp[z+1][uv[i][j]]==1) dp[z][i] = 1;
				}
			}

		}
	}
	if (dp[0][0]) cout << "Alice\n"; else cout << "Bob\n";

}

int main() {
	int t,l;
	cin >> t;
	for(l=0;l<t;l++) testcase();
	return 0;
}

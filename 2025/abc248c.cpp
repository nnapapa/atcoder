#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m >> k;
	vector<vector<ll>>	dp2(n+1 , vector<ll>(k+1,0));
	dp2[0][0] = 1;
	for(i=0;i<n;i++) {
		for(j=0;j<=k;j++) {
			for(x=1;x<=m;x++) {
				if (j+x <= k) dp2[i+1][j+x] = (dp2[i+1][j+x] + dp2[i][j]) % 998244353;
			}
		}
	}
	for(i=1;i<=k;i++) ans = (ans + dp2[n][i]) % 998244353;
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<vector<ll>>	aa(n+2, vector<ll>(n+2,0));
	for(i=0;i<m;i++) {
		cin >> a >> b;
		aa[a][b] = 1;
		aa[b][a] = 1;
	}
	vector<ll> f(n+1);
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) f[j] = aa[i][j];
		f[i] = 1;
		for(j=1;j<=n;j++) if (aa[i][j]) {
			for(k=1;k<=n;k++) {
				if (aa[j][k] && !f[k]) f[k] = 2;
			}
		}
		ans = 0;
		for(j=1;j<=n;j++) if (f[j]==2) ans++;
		cout << ans << endl;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	//cout << ans << endl;
	return 0;
}

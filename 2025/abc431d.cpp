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
	cin >> n;
	vector<ll>	W(n+1),H(n+1),B(n+1);
	for(i=1;i<=n;i++) cin >> W[i] >> H[i] >> B[i];
	vector<vector<ll>>	dp2(n+1 , vector<ll>(n*500+1,0));
	dp2[1][0] = H[1];
	dp2[1][W[1]] = B[1];
	t = W[1];
	for(i=2;i<=n;i++) {
		for(j=0;j<=n*500;j++) {
			if (dp2[i-1][j]==0) continue;
			dp2[i][j+W[i]] = max(dp2[i][j+W[i]] ,dp2[i-1][j] + B[i]);
			//printf("i:%d j:%d W:%d dp2:%d\n",i,j,W[i],dp2[i][j+W[i]]);
			dp2[i][j] = max(dp2[i][j], dp2[i-1][j] + H[i]);
			//printf("i:%d j:%d W:%d dp2:%d\n",i,j,W[i],dp2[i][j]);
		}
		t += W[i];
	}

	for(j=(t+1)/2;j<=n*500;j++) {
		ans = max(ans , dp2[n][j]);
	}
	cout << ans << endl;
	return 0;
}

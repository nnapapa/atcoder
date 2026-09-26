#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll op(ll a,ll b) { return max(a,b); }
ll e() { return -1; }

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,r,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> w >> n;
	vector<ll>	L(n+1),R(n+1),V(n+1);
	for(i=1;i<=n;i++) cin >> L[i] >> R[i] >> V[i];
	vector<vector<ll>>	dp2(n+1 , vector<ll>(w+1,-1));
	for(i=0;i<=n;i++) dp2[i][0] = 0;
	segtree<ll , op , e> seg(w+1);
	for(i=1;i<=n;i++) {
		l = L[i];
		r = R[i];
		v = V[i];
		for(j=0;j<=w;j++) {
			seg.set((int)j,dp2[i-1][j]);
		}
		for(j=0;j<=w;j++) {
			a = seg.prod((int)max(0LL,j-r),(int)max(0LL,j-l+1));
			//cout << a << endl;
			dp2[i][j] = dp2[i-1][j];
			if (a!=-1) dp2[i][j] = max(dp2[i][j] , a+v);
		}

	}

	cout << dp2[n][w] << endl;
	return 0;
}

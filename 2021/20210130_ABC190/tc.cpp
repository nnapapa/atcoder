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
	vector<ll>	A(m),B(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i];
	cin >> k;
	vector<ll>	C(k),D(k),cnt(n+1);
	for(i=0;i<k;i++) cin >> C[i] >> D[i];
	for(i=0;i<(1<<k);i++) {
		x = i;
		for(j=1;j<=n;j++) cnt[j] = 0;
		for(j=0;j<k;j++) {
			if ( (x&(1<<j)) ) cnt[C[j]]++;
			else cnt[D[j]]++;
		}
		y = 0;
		for(j=0;j<m;j++) if (cnt[A[j]]>0 && cnt[B[j]]>0) y++;
		ans = max(ans , y);
		
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

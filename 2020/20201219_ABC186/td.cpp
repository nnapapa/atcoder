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
	cin >> n;
	vector<ll>	aa(n),sum(n+1,0);
	for(i=0;i<n;i++) cin >> aa[i];
	sort(aa.begin(),aa.end());
	reverse(aa.begin(),aa.end());
	sum[0] = aa[0];
	for(i=1;i<n;i++) sum[i] = sum[i-1] + aa[i];
	for(i=1;i<n;i++) {
			ans += aa[i-1]*(n-i) - (sum[n-1] - sum[i-1]);
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

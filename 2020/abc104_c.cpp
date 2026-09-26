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
	vector<ll>	aa(1000002,0);
	for(i=0;i<n;i++) {
		cin >> a >> b;
		aa[a]++;
		aa[b+1]--;
	}
	for(i=1;i<=1000000;i++) {
		aa[i] += aa[i-1];
	}
	for(i=0;i<=1000000;i++) {
		ans = max(ans, aa[i]);
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

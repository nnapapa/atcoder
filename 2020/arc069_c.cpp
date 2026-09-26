#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,s,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> s >> c;

	z = c - s*2;
	if (z>=4) cout << s + z/4 << endl;
	else cout << min(s,c/2) << endl;

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	//cout << ans << endl;
	return 0;
}

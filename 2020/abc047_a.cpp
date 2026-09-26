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
	cin >> a >> b >> c;
	if (a >= b && a >= c) { x=a; y=b+c;}
	if (b >= a && b >= c) { x=b; y=a+c;}
	if (c >= a && c >= b) { x=c; y=a+b;}
	if (x==y) cout << "Yes" << endl;
	else cout << "No" << endl;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	//cout << ans << endl;
	return 0;
}

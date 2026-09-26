#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 998244353

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> a >> b >> c;

	a = (a+1)*(a)/2;
	b = (b+1)*(b)/2;
	c = (c+1)*(c)/2;
	a = a % MOD;
	b = b % MOD;
	c = c % MOD;
	ans = ( ( (a * b) % MOD ) * c) % MOD;

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

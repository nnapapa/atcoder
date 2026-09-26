#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 1000000007

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	
	cin >> n;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	//if (n>=2) ans = n*(n-1) % MOD;

	ans = 1;
	for(i=1;i<=n;i++) {
		ans = (ans * 10 ) % MOD;
	}
	
	
	b = 1;
	for(i=1;i<=n;i++) {
		b = (b * 9) % MOD;
	}
	b = b * 2 % MOD;

	c = 1;
	for(i=1;i<=n;i++) {
		c = (c * 8) % MOD;
	}
	b = (MOD + b - c) % MOD;

	
	//ans = (MOD + ans + a ) % MOD;
	ans = (MOD + ans - b ) % MOD;
	//ans = (MOD + ans - c ) % MOD;
	

	if (n==1) ans = 0;
	cout << ans << endl;
	return 0;
}

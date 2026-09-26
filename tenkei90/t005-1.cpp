#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 1000000007LL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> b >> k;
	vector<ll>	C(k);
	for(i=0;i<k;i++) cin >> C[i];
	vector<vector<ll>>	dp2(n+1 , vector<ll>(b,0));
	dp2[0][0] = 1;
	for(i=0;i<n;i++) for(j=0;j<b;j++) {
		for(x=0;x<k;x++) {
			a = (j*10 + C[x]) % b;
			dp2[i+1][a] += dp2[i][j];
			dp2[i+1][a] %= MOD;
		}
	}
	/*
	for(i=0;i<=n;i++) {
		for(j=0;j<b;j++) cout << dp2[i][j] << " ";
		cout << endl;
	}*/
	cout << dp2[n][0] << endl;
	return 0;
}

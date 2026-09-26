#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define m998 998244353

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;

	vector<vector<ll>>	dp2(11 , vector<ll>(n+1,0));
	for(i=1;i<=9;i++) dp2[i][1] = 1;
	for(j=2;j<=n;j++) {
		for(i=1;i<=9;i++) {
			for (k=i-1;k<=i+1;k++) dp2[i][j] = (dp2[i][j] + dp2[k][j-1]) % m998;
		}
	}
	for(i=1;i<10;i++) ans = (ans + dp2[i][n]) % m998;
	cout << ans << endl;
	return 0;
}

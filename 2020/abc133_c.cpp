//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,l,r,ans = INF;
	string	s;
	cin >> l >> r;
	for(i=l;i<=min(r,l+2019);i++) {
		for(j=i+1;j<=min(r,i+1+2019);j++) {
			ans = min(ans , i*j%2019);
		}
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

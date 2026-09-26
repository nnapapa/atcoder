//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	b = 0;
	ans = n;
	for(i=1;i<=n;i++) {
		a = i;
		c = 0;
		while(a%2 == 0) {
			a /= 2;
			c++;
		}
		if (b < c) {
			b = c;
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}

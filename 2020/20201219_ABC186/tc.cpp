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
	//vector<ll>	aa(n);
	for(i=1;i<=n;i++) {
		a = i;
		c = 1;
		while(a>0) {
			if (a%10==7) c = 0;
			a /= 10;
		}
		a = i;
		while(a>0) {
			if (a%8==7) c = 0;
			a /= 8;
		}
		ans += c;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

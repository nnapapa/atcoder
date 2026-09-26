#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	a(n);
	for(i=0;i<n;i++) cin >> a[i];

	c = 0;
	for(k=2;k<=1000;k++) {
		b = 0;
		for(i=0;i<n;i++) if (a[i]%k==0) b++;
		if (b>c) {
			c = b;
			ans = k;
		}
	}
	//for(i=0;i<n;i++) if (a[i]%ans==0) break;

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

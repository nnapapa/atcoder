#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,z;
	ll		ans = 0;
	double x , y;
	string	s;
	cin >> n;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	for(i=0;i<n-1;i++) for(j=i+1;j<n;j++) {
		x = X[j]-X[i];
		y = Y[j]-Y[i];
		//cout << y/x << endl;
		if (y/x>=(double)-1 && y/x<=(double)1) ans++;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

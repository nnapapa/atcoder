#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double a,b,ans = 0.0;
	cin >> n;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	if (n%2) {
		a = X[n/2];
		b = Y[n/2];
	} else {
		a = (double)(X[n/2-1] + X[n/2])/2;
		b = (double)(Y[n/2-1] + Y[n/2])/2;
	}
	for(i=0;i<n;i++) {
		ans += abs((double)X[i]-a);
		ans += abs((double)Y[i]-b);
	}
	c = ans;
	cout << c << endl;
	return 0;
}

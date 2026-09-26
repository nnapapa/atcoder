#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0.0;
	string	s;
	cin >> n;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			x = X[i] - X[j];
			y = Y[i] - Y[j];
			ans = max(ans, x*x + y*y);
		}
	}

	printf("%.10f\n",sqrt(ans));
	return 0;
}

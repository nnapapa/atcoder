#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,D,H,i,j,l,m,n,v,w,x,y,z;
	double ans = 0.0;
	double a , b;
	string	s;
	cin >> n >> D >> H;

	for(i=0;i<n;i++) {
		cin >> d >> h;
		a = (double)(H-h)/(D-d);
		b = H - a*D;
		b = max(b , 0.0);
		ans = max(ans , b);
	}
	printf("%.10f\n", ans);
	return 0;
}

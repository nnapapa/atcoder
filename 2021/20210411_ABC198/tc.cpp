#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,r,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> r >> x >> y;
	long double aa;
	aa = sqrt(x*x + y*y);
	b = r;
	if (aa==b) ans = 1;
	else if (aa<=2*b) ans = 2;
	else while(aa>b) {ans++; b+=r;}
	cout << ans << endl;
	return 0;
}

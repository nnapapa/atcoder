#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	double	ans;
	string	s;
	cin >> a >> b >> c >> x;

	if (x<=a) ans = 1.0;
	else if (x>b) ans = 0.0;
	else ans = (double)c / (b-a);
	printf("%.10f\n",ans);
	return 0;
}

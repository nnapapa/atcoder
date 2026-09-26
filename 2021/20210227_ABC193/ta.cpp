#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double		ans = 0;
	string	s;
	cin >> a >> b;

	ans = (double)(a-b)*100 / a;

	printf("%.10f\n",ans);
	return 0;
}

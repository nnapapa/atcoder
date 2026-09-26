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
	cin >> a >> b >> c >> x >> y;
	if (y>x) { swap(a,b); swap(x,y); }
	ans = min(a+b,2*c)*y;
	x -= y;
	ans += min(a,2*c)*x;
	cout << ans << endl;
	return 0;
}

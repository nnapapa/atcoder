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
	cin >> x >> y >> z;

	if (y%x == 0) {
		ans = (y/x)*z-1;
	} else {
		for(ans=1000000;ans>0;ans--) {
			if ((double)y/x > (double)ans/z) break;
		}
	}

	cout << ans << endl;
	return 0;
}

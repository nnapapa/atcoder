#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> a >> b >> c >> d;

	if (c*d-b<=0) {
		cout << -1 << endl;
		return 0;
	}
	if (a > (c*d-b) && (c*d-b)!=0) {
		ans = a / (c*d-b);
		if (a % (c*d-b)) ans++;
	}

	cout << ans << endl;
	return 0;
}

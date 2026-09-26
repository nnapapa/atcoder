//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> x >> k >> d;

	a = abs(x);

	if (k < a/d) {
		ans = a - k*d;
	} else {
		i = a % d;
		j = abs(i - d);
		c = k - a / d;
		if (c%2==0) ans = i;
		else ans = j;
	}
	cout << ans << endl;
	return 0;
}

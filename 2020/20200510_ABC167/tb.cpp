//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> a >> b >> c >> k;

	if (a>=k) {
		ans = k;
	} else if (a+b>=k) {
		ans = a;
	} else {
		ans = a - (k-(a+b));
	}

	cout << ans << endl;
	return 0;
}

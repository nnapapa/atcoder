//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = INFL;
	string	s;
	cin >> n;
	for(i=1;i<=100000;i++) {
		if (i>n) break;
		if (n%i!=0) continue;
		x = i;
		y = n/i;
		a = b = 0;
		while(x>0) {
			x = x / 10;
			a++;
		}
		while(y>0) {
			y = y / 10;
			b++;
		}
		ans = min(ans , max(a,b));

	}
	cout << ans << endl;
	return 0;
}

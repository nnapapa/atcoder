//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll calc(ll a, ll b) {
	return a*a*a*a*a-b*b*b*b*b;
}
int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> x;

	a = 64;
	b = 64;

	ans = calc(a , b);
	while(ans != x) {
		if (ans > x) {
			a--;
		} else {
			b--;
		}
		ans = calc(a , b);
	}

	cout << a << ' ' << b << endl;

}

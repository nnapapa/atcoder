//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,t;
	ll		ans = 0;
	string	s;
	cin >> a >> v;
	cin >> b >> w;
	cin >> t;
	
	if (v <= w) {
		cout << "NO" << endl;
		return 0;
	}
	c = abs(a-b);
	x = abs(v-w);
	if (x*t >= c) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

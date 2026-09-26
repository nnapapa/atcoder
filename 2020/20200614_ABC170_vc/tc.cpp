//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,h,i,j,k,l,m=INF,n,x,y;
	ll		ans = INF;
	string	s;
	cin >> x >> n;
	set<ll>	p;
	for(i=0;i<n;i++) {
		cin >> j;
		p.insert(j);

	}
	for(i=-1;i<=101;i++) {
		if (p.count(i)) continue;
		c = abs(i-x);
		if (c < m) {
			ans = i;
			m = c;
		} else if (c == m) {
			ans = min(ans,i);
		}
	}

	cout << ans << endl;
	return 0;
}

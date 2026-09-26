//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,h,i,j,k,l,m,n,q,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	map<ll,ll>	ac;
	for(i=0;i<n;i++) {
		cin >> x;
		ac[x]++;
		ans += x;
	}
	cin >> q;

	vector<ll>	bb(q),cc(q);
	for(i=0;i<q;i++) {
		cin >> bb[i] >> cc[i];
	}
	for(i=0;i<q;i++) {
		b = bb[i];
		c = cc[i];
		if (ac.count(b)) {
			ans += (c-b)*ac[b];
			ac[c] += ac[b];
			ac.erase(b);
		}

		cout << ans << endl;
	}

	return 0;
}



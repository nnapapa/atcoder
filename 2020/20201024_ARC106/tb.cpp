#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Yes";
	cin >> n >> m;
	vector<ll>	a(n),b(n),c(n,0),e(n,0);
	for(i=0;i<n;i++) {
		cin >> x;
		a[i] = x + 1000000000;
	}
	for(i=0;i<n;i++) {
		cin >> x;
		b[i] = x + 1000000000;
	}

	if (m==0) {
		for(i=0;i<n;i++) {
			if (a[i]!=b[i]) s = "No";
		}
		cout << s << endl;
		return 0;
	}

	dsu d(n);
	for(i=0;i<m;i++) {
		cin >> x >> y;
		d.merge(x-1 , y-1);
	}
	for(i=0;i<n;i++) {
		c[d.leader(i)] += a[i];
		e[d.leader(i)] += b[i];
	}

	for(i=0;i<n;i++) {
		if (c[d.leader(i)] != e[d.leader(i)]) s = "No";
	}

	cout << s << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,i,j,k,l,m,n,v,w,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll> x(n),y(n),h(n);
	for(i=0;i<n;i++) {
		cin >> x[i] >> y[i] >> h[i];
		if (h[i]>0) ans++;
	}
	if (ans==1) {
		for(i=0;i<n;i++) if (h[i]>0){
			cout << x[i] << " " << y[i] << " " << h[i] << endl;
			return 0;
		}
	}
	for(i=0;i<=100;i++) for(j=0;j<=100;j++) {
		bool f = true;
		d = 0;
		for(k=0;k<n;k++) {
			c = h[k] + abs(x[k]-i) + abs(y[k]-j);
			//cout << d << " " << c << endl;
			if (h[k]>0) {
				if (d==0) d = c;
				if (c!=d) { f = false; break; }
			}
		}
		if (f) goto END;
	}
END:
	cout << i << " " << j << " " << d << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> q;
	vector<ll>	X,C;
	p = 0;
	t = 0;
	for(i=0;i<q;i++) {
		cin >> a;
		if (a==1) {
			cin >> x >> c;
			t += x*c;
			X.push_back(x);
			C.push_back(c);
		} else {
			cin >> c;
			ans = t;
			while(c>0) {
				if (c < C[p]) {
					C[p] -= c;
					t -= X[p]*c;
					c = 0;
				} else {
					t -= X[p]*C[p];
					c -= C[p];
					p++;
				}
			}
			cout << ans - t << endl;
		}
	}
	return 0;
}

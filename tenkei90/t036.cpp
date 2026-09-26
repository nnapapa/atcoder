#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,q,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll>	X(n),Y(n),Q(q);
	for(i=0;i<n;i++) {
		cin >> x >> y;
		X[i] = x-y;
		Y[i] = x+y;
	}

	for(i=0;i<q;i++) cin >> Q[i];
	a = b = X[0];
	c = d = Y[0];
	for(i=1;i<n;i++) {
		a = max(a , X[i]);
		b = min(b , X[i]);
		c = max(c , Y[i]);
		d = min(d , Y[i]);
	}
	for(i=0;i<q;i++) {
		x = X[Q[i]-1];
		y = Y[Q[i]-1];
		ans = max(abs(x-a),abs(x-b));
		ans = max(ans , abs(y-c));
		ans = max(ans , abs(y-d));
		cout << ans << endl;
	}
	
	return 0;
}

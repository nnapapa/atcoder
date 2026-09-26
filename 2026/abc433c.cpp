#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Yes";
	cin >> n >> h;
	ll pt,pl,pu;
	pl = pu = h;
	pt = 0;
	for(i=0;i<n;i++) { 
		cin >> t >> l >> u;
		if (s=="No") continue;
		a = t - pt;
		b = max(0ll, pl - a);
		c = pu + a;
		if (c<l || b>u) {
			s = "No";
			continue;
		}
		pl = max(b,l);
		pu = min(c,u);
		pt = t;
	}
	cout << s << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) testcase();
	return 0;
}

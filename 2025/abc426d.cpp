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
	string	s;
	cin >> n >> s;
	a = b = l = m = x = y = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='0') {l++; a++;} else {x = max(x,l); l = 0;}
		if (s[i]=='1') {m++; b++;} else {y = max(y,m); m = 0;}
	}
	x = max(x,l);
	y = max(y,m);
	c = b + (a - x)*2;
	d = a + (b - y)*2;
	cout << min(c,d) << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		testcase();
	}
	return 0;
}

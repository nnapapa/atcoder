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
	cin >> a >> b >> c;
	if (a>c) swap(a,c);
	t = b + c - a;
	if (t>a) ans = a;
	else {
		ans = b + (c-b+a-b)/3;
	}
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) testcase();
	return 0;
}

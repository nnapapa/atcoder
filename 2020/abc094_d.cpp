#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	sort(aa.begin(),aa.end());
	a = aa[n-1];
	c = INFL;
	for(i=0;i<n;i++) {
		if (c>abs(a-aa[i]*2)) {
			b = aa[i];
			c = abs(a-aa[i]*2);
		}
	}
	cout << a << ' ' << b << endl;
	return 0;
}

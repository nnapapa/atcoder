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
	vector<ll>	xx(n),yy(n);
	for(i=0;i<n;i++) cin >> xx[i];
	for(i=0;i<n;i++) yy[i] = xx[i];
	sort(xx.begin(),xx.end());
	a = xx[n/2-1];
	b = xx[n/2];
	for(i=0;i<n;i++) {
		if (yy[i]<=a) cout << b << endl;
		else cout << a << endl;
	}

	return 0;
}

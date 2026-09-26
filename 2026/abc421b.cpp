#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll solv(ll a, ll b) {
	ll c = a + b;
	vector<ll> A;
	while(c>0) {
		A.push_back(c%10);
		c /= 10;
	}
	for(ll i=0;i<A.size();i++) {
		c *= 10;
		c += A[i];
	}
	return c;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> x >> y;
	for(i=3;i<=10;i++) {
		z = solv(x,y);
		x = y;
		y = z;
	}
	cout << z << endl;
	return 0;
}

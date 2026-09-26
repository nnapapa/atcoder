#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll calc(ll y , ll x) {
	if (x==1) return 1;
	if (x==y) return 1;
	return calc(y-1,x)+calc(y-1,x-1);
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> a;
	cout << a+1 << " 2\n";
	return 0;
}

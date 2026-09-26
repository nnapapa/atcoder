#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll> p(100),all(100);
ll calc(ll n, ll x) {
	if (x==0) return 0;
	if (n==0) return 1;
	if (x==1) return 0;
	if (x<=all[n-1]) return calc(n-1,x-1);
	if (x==all[n-1]+1) return p[n-1];
	if (x==all[n-1]+2) return p[n-1] + 1;
	if (x==all[n]) return p[n-1]*2 + 1;
	return p[n-1] + 1 + calc(n-1,x-all[n-1]-2);
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x;
	p[0] = all[0] = 1;
	for(i=1;i<=n;i++) {
		p[i] = p[i-1]*2 + 1;
		all[i] = all[i-1]*2 + 3;
	}
	ans = calc(n,x);
	cout << ans << endl;
	return 0;
}

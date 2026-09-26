#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* 最大公約数 (ユークリッドの互除法) */
ll gcd(ll m, ll n) {
	ll temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n),ll(n),rr(n),g(n);
	for(i=0;i<n;i++) cin >> aa[i];
	ll[0] = aa[0];
	for(i=1;i<n-1;i++) ll[i]=gcd(ll[i-1],aa[i]);
	rr[n-1] = aa[n-1];
	for(i=n-2;i>0;i--) rr[i]=gcd(rr[i+1],aa[i]);
	g[0] = rr[1];
	g[n-1] = ll[n-2];
	for(i=1;i<n-1;i++) g[i] = gcd(ll[i-1],rr[i+1]);
	for(i=0;i<n;i++) ans = max(ans , g[i]); 
	cout << ans << endl;
	return 0;
}

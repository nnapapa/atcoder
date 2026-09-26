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

/* 最小公倍数 */
ll lcm(ll m, ll n) {
	return m*n/gcd(m,n);
}

int main() {
	ll		a,b,c,d,h,i,j,s,k,l,m,n,t,v,w,x,y,z;
	cin >> t;
	vector<ll>	ans(t,0);
	for(i=0;i<t;i++) {
		cin >> n >> s >> k;
		if ((n-s)%k==0) {
			ans[i] = (n-s)/k;
			continue;
		}
		ans[i] = (n-s)/k + 1;
		s = k - (n-s)%k;
		ll ns = k - (n-s)%k;
		ll sa = abs(ns-s);
		if (sa == 0) {
			ans[i] = -1;
			continue;
		}
		if (s==0) {
			ans[i] += (n-s)/k;
			continue;
		}
		if (n%sa==0 && n%s!=0) {
			ans[i] = -1;
			continue;
		}
		x = lcm(n,sa);
		ans[i] += x ;

	}

	for(i=0;i<t;i++) cout << ans[i] << endl;
	return 0;
}

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
	return m/gcd(m,n)*n;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> a >> b;
	lll		A = a , B = 1000000000000000000ll , C;
	C = A/gcd(a,b)*b;
	ans = C;
	if (C>B) cout << "Large" << endl;
	else cout << ans << endl;
	return 0;
}

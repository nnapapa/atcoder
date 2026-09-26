#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* 最大公約数 (ユークリッドの互除法) */
long long gcd(long long m, long long n) {
	long long temp;
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
long long lcm(long long m, long long n) {
	return m*n/gcd(m,n);
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 2;
	string	s;
	cin >> n;
	for(i=3;i<=n;i++) ans = lcm(ans,i);
	ans++;

	cout << ans << endl;
	return 0;
}

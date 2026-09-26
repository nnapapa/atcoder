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

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s = "POSSIBLE";
	cin >> n >> k;
	vector<ll>	a(n);
	for(i=0;i<n;i++) cin >> a[i];
	ans = a[0];
	for(i=1;i<n;i++) ans = gcd(ans,a[i]);
	m = 0;
	for(i=0;i<n;i++) m = max(m,a[i]);
	if (m<k) s = "IMPOSSIBLE";
	else if (n==1 && m!=k) s = "IMPOSSIBLE";
	else if (k%ans) s = "IMPOSSIBLE";

	cout << s << endl;
	return 0;
}

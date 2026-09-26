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
	ll		b,c,d,h,i,j,k,l,m,n,v,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	if (m==0) {
		cout << 1 << endl;
		return 0;
	}
	vector<ll>	a(m),w(m+10);
	for(i=0;i<m;i++) cin >> a[i];
	sort(a.begin(),a.end());
	x = 1;
	k = 0;
	for(i=0;i<m;i++) {
		if (a[i]>x) {
			w[k++] = a[i]-x;
		}
		x = a[i]+1;
	}
	if (x<n) w[k++] = n-x+1;
	//for(i=0;i<k;i++) cout << w[i] << " ";
	//cout << endl;
	if (k==0) {ans = 0; }
	else {
		m = w[0];
		for(i=1;i<k;i++) m = min(m,w[i]);
		for(i=0;i<k;i++) ans += (w[i]+m-1) / m;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

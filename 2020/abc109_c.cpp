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
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x;
	vector<ll>	aa(n+1),sub(n);
	for(i=0;i<n;i++) cin >> aa[i];
	aa[n]=x;
	sort(aa.begin(),aa.end());
	for(i=0;i<n;i++) sub[i] = aa[i+1] - aa[i];
	d = sub[0];
	for(i=1;i<n;i++) {
		d = gcd(d,sub[i]);
	}

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << d << endl;
	return 0;
}

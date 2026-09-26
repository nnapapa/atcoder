#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

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
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,L,R;
	ll		ans = 0;
	string	s;
	cin >> L >> R;

	//vector<ll>	A(n);
	for(i=L;i<R;i++) {
		for(j=i+1;j<=R;j++) {
			a = gcd(i,j);
			if (a>1 && a!=i && a!=j) ans += 2;
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

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
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	map<pair<ll,ll>,ll> ANS;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (i==j) continue;
			x = X[i] - X[j];
			y = Y[i] - Y[j];
			if (x==0) ANS[make_pair(0,y/abs(y))];
			else if (y==0) ANS[make_pair(x/abs(x),0)];
			else {
				z = gcd( abs(x) , abs(y) );
				ANS[make_pair(x/z,y/z)] = 1;
			}
		}
	}
	cout << ANS.size() << endl;
	return 0;
}

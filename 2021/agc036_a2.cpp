#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll> div;
	if(n<=1000000000) {
		cout << 0 << ' ' << 0 << ' ';
		cout << 0 << ' ' << n << ' ';
		cout << 1 << ' ' << n << endl;
	} else {
		a = (n+999999999) / 1000000000;
		b = a*1000000000 - n;
		cout << 0 << ' ' << 0 << ' ';
		cout << 1000000000 << ' ' << 1 << ' ';
		cout << b << ' ' << a << endl;
	}

	return 0;
}

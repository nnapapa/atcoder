#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b;
	ll		c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s = "UNSATISFIABLE";
	cin >> a >> b >> w;
	w *= 1000;
	c = w / a;
	d = (w+b-1) / b;
	if (c < d) {
		cout << s << endl;
		return 0;
	}
	cout << d << " " << c << endl;
	return 0;
}

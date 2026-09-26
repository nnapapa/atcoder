#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> v >> a >> b >> c;
	v %= a+b+c;
	v -= a;
	if (v<0) {
		cout << "F" << endl;
	} else {
		v -= b;
		if (v<0) {
			cout << "M" << endl;
		} else {
			v -= c;
			if (v<0) {
				cout << "T" << endl;
			} else {
				cout << "F" << endl;
			}
		}
	}

	return 0;
}

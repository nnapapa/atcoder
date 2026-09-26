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
	string	s = "=";
	cin >> a >> b >> c;

	if (c%2==0) {
		a = abs(a);
		b = abs(b);
	}
	if (a<b) s = "<";
	if (a>b) s = ">";

	cout << s << endl;
	return 0;
}

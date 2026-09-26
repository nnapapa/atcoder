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
	cin >> x >> y;
	if (x < y) ans = y - x;
	else ans = x - y + 2;
	
	a = abs(x);
	b = abs(y);
	if (a<b) {
		if (x<0) c = b - a + 1;
		else c = b - a;
		if (y<0) c++;
	} else {
		if (x>0) c = a - b + 1;
		else c = a - b;
		if (y>0) c++;
	}
	ans = min(ans,c);
	cout << c << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> b >> c;
	if (c==1) {
		if (b) ans = 2;
	} else if (b>0) {
		ans = 2;
		if (b-c/2>0) {
			ans += c/2;
		} else {
			ans += b;
		}
		if (c>=4) ans += (c-2)/2;
		c--;
		b = -b;
		ans += c/2;
		if (c>=2) if (b+(c-2)/2<0) {
			ans += (c-2)/2;
		} else {
			ans += -b-1;
		}

	} else if (b<0) {
		ans = 2;
		ans += c/2;
		if (b+(c-2)/2<0) {
			ans += (c-2)/2;
		} else {
			ans += -b;
		}

		if (c>=2) ans += (c-2)/2;
		c--;
		b = -b;
		if (b-c/2>0) {
			ans += c/2;
		} else {
			ans += b-1;
		}


	} else {
		ans += c;
		if (c%2==0) ans--;
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k >> a;

	b = n - a + 1;

	if (k < b) ans = a + k - 1;
	else {
		k = k - b;
		ans = k % n;
		if (ans == 0) ans = n;
	}	
	cout << ans << endl;
	return 0;
}

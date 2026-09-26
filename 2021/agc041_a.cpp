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
	cin >> n >> a >> b;
	if ((b-a)%2==0) ans = (b-a)/2;
	else {
		if (a < n-b+1) {
			ans = a;
			b -= a;
			ans += b/2;
		} else {
			ans = n-b+1;
			a += n-b+1;
			ans += (n-a)/2;
		} 
	}
	cout << ans << endl;
	return 0;
}

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
	cin >> x;

	ans = x / 11 * 2;
	x = x % 11;
	if (x>6) ans+=2;
	else if (x>0) ans++;

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void calc(ll n , string s) {
	if (n==0) {
		cout << s << endl;
		return;
	}
	calc(n-1,s+"a");
	calc(n-1,s+"b");
	calc(n-1,s+"c");
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	calc(n,s);

	//cout << ans << endl;
	return 0;
}

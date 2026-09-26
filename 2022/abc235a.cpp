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
	cin >> s;
	a = s[0] - '0';
	b = s[1] - '0';
	c = s[2] - '0';
	ans = a*111 + b*111 + c*111;

	cout << ans << endl;
	return 0;
}

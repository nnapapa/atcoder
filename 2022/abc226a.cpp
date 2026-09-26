#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	double		ans;
	string	s;
	cin >> s;
	i = a = 0;
	while(s[i]!='.') a = a*10 + s[i++] - '0';
	if (s[i+1]<'5') cout << a;
	else cout << a+1;

	return 0;
}

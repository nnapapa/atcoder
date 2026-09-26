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
	y = s[s.size()-1] -'0';
	for(i=0;i<s.size()-2;i++) cout << s[i];
	if (y >= 7) cout << '+';
	else if (y<=2) cout << '-';

	cout << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	string	ans = "Yes";
	string	s,t;
	cin >> s >> t;
	a = t[0] - s[0];
	if (a<0) a = 'z' - s[0] + 1 + t[0] - 'a';
	for(i=0;i<s.size();i++) {
		b = s[i]-'a';
		s[i] = 'a' + (b+a)%26;
	}
	if (s!=t) ans = "No";
	cout << ans << endl;
	return 0;
}

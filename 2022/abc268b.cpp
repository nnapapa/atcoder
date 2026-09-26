#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	string		ans = "Yes";
	string	s,t;
	cin >> s >> t;
	if (s.size()>t.size()) ans = "No";
	else {
		for(i=0;i<s.size();i++) {
			if (s[i]!=t[i]) ans = "No";
		}
	}
	cout << ans << endl;
	return 0;
}

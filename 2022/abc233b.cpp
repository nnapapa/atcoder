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
	cin >> l >> r;
	cin >> s;
	l--;r--;
	for(i=0;i<s.size();i++) {
		if (i>=l && i<=r) {
			cout << s[r - (i-l)];
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}

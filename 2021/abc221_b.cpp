#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	ll		ans = 1;
	string	s , t;
	cin >> s >> t;
	for(i=0;i<s.size();i++) {
		if (s[i]==t[i]) continue;
		if (i<s.size()-1 && s[i]==t[i+1]) swap(t[i+1],t[i]);
		else ans = 0;
	}
	
	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

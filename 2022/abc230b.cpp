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
	cin >> s;
	//xoxxoxxo
	if (s.size() > 1) { 
		if (s[0]=='o') {
			t = "oxx";
		} else if (s[1]=='x') {
			t = "xxo";
		} else {
			t = "xox";
		}
		for(i=0;i<s.size();i++) {
			if (s[i]!=t[i%3]) ans = "No";
		}
	}
	cout << ans << endl;
	return 0;
}

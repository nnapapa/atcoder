#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	ans = "Yes";
	string	s,t;
	cin >> s >> t;
	map<char,char> tr;
	for(i=0;i<s.size();i++) {
		if (s[i]!=t[i]) {
			tr[t[i]] = s[i];
			tr[s[i]] = t[i];
		}
	}
	for(i=0;i<s.size();i++) {

	}

	cout << ans << endl;
	return 0;
}

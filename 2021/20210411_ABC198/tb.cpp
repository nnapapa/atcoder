#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s;
	cin >> s;
	n = s.size();
	for(i=n-1;i>=0;i--) {
		if (s[i]=='0') n--;
		else break;
	}
	//cout << n << endl;
	string ans = "Yes";
	for(i=0;i<n/2;i++) {
		if (s[i]!=s[n-1-i]) ans = "No";
	}

	cout << ans << endl;
	return 0;
}

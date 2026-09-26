#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	for(i=0;i<=8;i++) {
		if (s[i]=='Z' && s[i+1]=='O' && s[i+2]=='N' && s[i+3]=='e') ans++;
	}

	cout << ans << endl;
	return 0;
}

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
	n = s.size();

	a = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='S') a++;
		else if (a==0) ans++;
		else a--;
	}
	ans += a;

	cout << ans << endl;
	return 0;
}

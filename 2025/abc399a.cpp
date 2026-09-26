#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s,t;
	cin >> n >> s >> t;
	for(i=0;i<n;i++) if (s[i]!=t[i]) ans++;
	cout << ans << endl;
	return 0;
}

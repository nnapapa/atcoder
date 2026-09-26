#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	string	ans = "Easy";
	string	a,b;
	cin >> a >> b;
	n = a.size() - 1;
	m = b.size() - 1;
	x = min(m,n);
	for(i=0;i<=x;i++) {
		z = a[n--]-'0' + b[m--]-'0';
		if (z>=10) ans = "Hard";
	}

	cout << ans << endl;
	return 0;
}

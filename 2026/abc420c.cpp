#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	char	c;
	string	s;
	cin >> n >> q;
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0;i<n;i++) ans += min(A[i], B[i]);
	for(i=0;i<q;i++) {
		cin >> c >> x >> y;
		x--;
		ans -= min(A[x], B[x]);
		if (c=='A') A[x] = y; else B[x] = y;
		ans += min(A[x], B[x]);
		cout << ans << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
//nCr 組み合わせ計算(nPr/r!)
ll nCr(ll n, ll r) {
    if (r == 0) return 1;
    return (n - r + 1) * nCr(n, r - 1) / r;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	a = A[0];
	c = 1;
	for(i=1;i<n;i++) {
		if (a==A[i]) c++;
		else {
			if (c>1) ans += nCr(c,2);
			a = A[i];
			c = 1;
		}
	}
	if (c>1) ans += nCr(c,2);
	ans = nCr(n,2) - ans;
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	A(n), at(n+1,0), B(m);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<m;i++) cin >> B[i];
	sort(A.begin(),A.end());
	for(i=0;i<n;i++) at[i+1] = at[i] + A[i];
	for(i=0;i<m;i++) {
		a = upper_bound(A.begin(),A.end(),B[i]) - A.begin();
		b = n - a;
		ans += (a*B[i]  - at[a])%998244353 + (at[n]-at[a] - b*B[i])%998244353;
		ans %= 998244353;
	}
	cout << ans << endl;
	return 0;
}

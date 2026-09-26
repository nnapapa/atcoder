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
	cin >> n;
	vector<ll>	A(n),B(n),C(n);
	vector<ll>	AT(n+1,0),BT(n+1,0),CT(n+1,0),AB(n+1,0),BC(n+1,0);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0;i<n;i++) cin >> C[i];
	for(i=0;i<n;i++) {
		AT[i+1] = AT[i] + A[i];
		BT[i+1] = BT[i] + B[i];
		CT[i+1] = CT[i] + C[i];
	}
	for(i=0;i<=n;i++) {
		AB[i] = AT[i] - BT[i];
		BC[i] = BT[i] - CT[i];
	}
	for(a=-INFL,i=2;i<n;i++) {
		a = max(a , AB[i-1]);
		ans = max(ans , a+BC[i]+CT[n]);
	}
	cout << ans << endl;
	return 0;
}

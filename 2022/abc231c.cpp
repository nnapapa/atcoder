#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	cin >> n >> q;
	vector<ll>	A(n),ans(q);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	for(i=0;i<q;i++) {
		cin >> x;
		auto it = lower_bound(A.begin(),A.end(),x);
		ans[i] = A.end()-it;
	}

	for(i=0;i<q;i++) cout << ans[i] << endl;

	return 0;
}

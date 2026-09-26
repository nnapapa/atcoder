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
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	map<ll,ll> L,R;
	L[A[0]]++;
	for(i=1;i<n;i++) R[A[i]]++;
	ans = L.size() + R.size();
	for(i=1;i<n-1;i++) {
		if (R[A[i]]==1) R.erase(A[i]);
		else R[A[i]]--;
		L[A[i]]++;
		ans = max(ans , (ll)(L.size()+R.size()));
	}
	cout << ans << endl;
	return 0;
}

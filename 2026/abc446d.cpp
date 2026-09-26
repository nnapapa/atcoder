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
	map<ll,ll> mp;
	for(i=0;i<n;i++) {
		if (mp.count(A[i]-1)) mp[A[i]] = mp[A[i]-1]+1;
		else mp[A[i]] = 1;
	}
	for(auto p : mp) ans = max(ans , p.second);
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<ll>	sum(n+1,0);
	for(i=1;i<=n;i++) sum[i] = sum[i-1] + A[i-1];
	
	map<ll,ll> mp;
	for(i=0;i<n;i++) {
		mp[sum[i]]++;
		ans += mp[sum[i+1] - k];
	}

	cout << ans << endl;
	return 0;
}

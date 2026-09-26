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
	unordered_map<ll,vector<ll>> mp;
	for(i=0;i<n;i++) mp[A[i]].push_back(i);
	for(i=0;i<n;i++) {
		ll ai,aj,ak;
		ai = A[i];
		if (ai*5%7) continue;
		if (ai*3%7) continue;
		aj = ai*5/7;
		ak = ai*3/7;
		if (mp[aj].size()==0) continue;
		if (mp[ak].size()==0) continue;
		for(k=0;k<mp[ak].size();k++) {
			ll mj = min(i,mp[ak][k]);
			a = lower_bound(mp[aj].begin(),mp[aj].end(),mj) - mp[aj].begin();
			mj = max(i,mp[ak][k]);
			b = mp[aj].end() - lower_bound(mp[aj].begin(),mp[aj].end(),mj);
			ans += a+b;
			//printf("%d %d %d : %d\n",ai,aj,ak,a+b);
		}
	}
	cout << ans << endl;
	return 0;
}

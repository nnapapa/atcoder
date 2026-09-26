#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	vector<ll>		ans;
	vector<ll>		A(0x100000,-1);
	map<ll,ll>		mp;
	for(i=0;i<0x100000;i++) mp[i] = i;
	cin >> q;
	for(z=0;z<q;z++) {
		cin >> t >> x;
		y = x & 0xfffff;
		if (t==1) {
			auto it = mp.lower_bound(y);
			if (it == mp.end()) {
				it = mp.lower_bound(0);
			}
			A[it->second] = x;
			mp.erase(it->first);
		} else {
			ans.push_back(A[y]);
		}
	}

	for(i=0;i<ans.size();i++) cout << ans[i] << endl;
	//cout << endl;
	//for(auto p : mp) cout << p.first << " " << p.second << endl;
	return 0;
}

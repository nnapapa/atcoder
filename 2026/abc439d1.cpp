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
	unordered_map<ll,ll> mp;
	unordered_map<ll,vector<ll>> mi;
	vector<ll> vi;
	for(i=0;i<n;i++) {
		mp[A[i]]++;
		mi[A[i]].push_back(i);
	}
	for(auto p:mp) {
		k = p.first;
		c = p.second;
		if (k%5) continue;
		if (mp[k/5*3]==0 || mp[k/5*7]==0) continue;
		//cout << "i j k:" << k/5*3 << " " << k << " " << k/5*7 << endl;
		for(i=0,a=0;i<mi[k].size();i++) {
			b = mi[k][i];
			l = mi[k/5*3].end() - lower_bound(mi[k/5*3].begin(),mi[k/5*3].end(),b);
			m = mi[k/5*7].end() - lower_bound(mi[k/5*7].begin(),mi[k/5*7].end(),b);
			a += l*m;
			//cout << " a:" << a;
			l = lower_bound(mi[k/5*3].begin(),mi[k/5*3].end(),b) - mi[k/5*3].begin();
			m = lower_bound(mi[k/5*7].begin(),mi[k/5*7].end(),b) - mi[k/5*7].begin();
			a += l*m;
			//cout << " a:" << a << endl;
		}
		ans += a;
	}

	cout << ans << endl;
	return 0;
}

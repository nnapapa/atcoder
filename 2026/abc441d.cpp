#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,s,t,q,r,u,v,w,x,y,z;
	cin >> n >> m >> l >> s >> t;
	map<ll,vector<pair<ll,ll>>>	uvc;
	for(i=0;i<m;i++) {
		cin >> u >> v >> c;
		uvc[u].push_back(make_pair(v,c));
	}
	vector<map<ll,vector<ll>>> ans(l+1);
	ans[0][1].push_back(0);
	for(i=0;i<l;i++) {
		for(auto j : ans[i]) {
			u = j.first;
			auto e = j.second;
			for(auto p : uvc[u]) {
				v = p.first;
				c = p.second;
				for(auto ei=0;ei<e.size();ei++) {
					ans[i+1][v].push_back(ans[i][u][ei] + c);
				}
			}
		}
	}
	for(auto j : ans[l]) {
		v = j.first;
		auto e = j.second;
		a = 0;
		for(auto ei=0;ei<e.size();ei++) {
			if (e[ei]>=s && e[ei]<=t) {
				if (a!=v) cout << v << " ";
				a = v;
			}
		}
	}
	cout << endl;
	return 0;
}

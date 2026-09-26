#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	cin >> n >> m;
	dsu d(n);
	vector<vector<int>> hen(n);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		d.merge(a-1,b-1);
		hen[a-1].push_back(b-1);
		hen[b-1].push_back(a-1);
	}
	vector<vector<int>> g = d.groups();
	vector<ll> iro(n);
	queue q;
	for(i=0;i<g.size();i++) {
		if (g[i].size()==1) { ans *= 3; continue; }
		for(j=0;j<n;j++) iro[i] = INFL;
		q.pop(g[i][0]);
		while(q.size()) {
			a = q.front(); q.pop();
			
		}

	}
	cout << ans << endl;
	return 0;
}

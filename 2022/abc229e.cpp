#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	vector<ll>		ans;
	cin >> n >> m;
	vector<vector<ll>> AB(n+1);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		AB[a].push_back(b);
	}
	dsu d(n+1);
	ans.push_back(0);
	a = 0;
	for(i=n;i>=2;i--) {
		a++;
		for(j=0;j<AB[i].size();j++) {
			x = AB[i][j];
			if (d.same(i,x)==0) a--;
			d.merge(i,x);
		}
		ans.push_back(a);
	}
	for(i=ans.size()-1;i>=0;i--) cout << ans[i] << endl;
	return 0;
}

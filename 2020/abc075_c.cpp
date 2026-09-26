#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<pair<ll,ll>>	aa(m);
	for(i=0;i<m;i++) cin >> aa[i].first >> aa[i].second;
	vector<vector<int>> tmp;
	for(x=0;x<m;x++) {
		dsu e(n);
		for(i=0;i<m;i++) if (x!=i) e.merge(aa[i].first-1 , aa[i].second-1);
		tmp = e.groups();
		//cout << " " << tmp.size() << endl;
		ans += e.groups().size() - 1;
	}
	cout << ans << endl;
	return 0;
}

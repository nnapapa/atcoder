#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	p(n+1,INFL);
	for(i=1;i<=n;i++) cin >> p[i];
	dsu d(n+1);
	for(i=0;i<m;i++) {
		cin >> x >> y;
		d.merge(x,y);
	}
	vector<vector<int>> dd = d.groups();
	for(i=0;i<dd.size();i++) {
		map<ll,ll> ck;
		for(j=0;j<dd[i].size();j++) {
			ck[p[dd[i][j]]] = 1;
		}
		for(j=0;j<dd[i].size();j++) if (ck[dd[i][j]]==1) ans++;
		ck.clear();
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,q,x,y;
	string	s;
	cin >> n >> m >> q;
	vector<ll>	cc(n+1);
	vector<vector<ll>>	hen(n+1);
	vector<ll>	ans;
	for(i=0;i<m;i++) {
		cin >> x >> y;
		hen[x].push_back(y);
		hen[y].push_back(x);
	}
	for(i=1;i<=n;i++) {
		cin >> cc[i];
	}
	for(i=0;i<q;i++) {
		cin >> c >> x;
		ans.push_back(cc[x]);
		if (c==1) {
			for(j=0;j<hen[x].size();j++) cc[hen[x][j]] = cc[x];
		} else {
			cin >> y;
			cc[x] = y;
		}
	}

	for(i=0;i<ans.size();i++) {
		cout << ans[i] << endl;
	}
	return 0;
}

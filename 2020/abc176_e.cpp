#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	int		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	int		ans = 0;
	string	s;
	cin >> h >> w >> m;
	vector<pair<int,int>>	hw(m);
	for(i=0;i<m;i++) cin >> hw[i].first >> hw[i].second;
	map<int,int>	hh,ww;
	map<pair<int,int>,int> bm;
	for(i=0;i<m;i++) {
		hh[hw[i].first]++;
		ww[hw[i].second]++;
		bm[hw[i]] = 1;
	}

	x = y = 0;
	for(auto p : hh) x = max(x, p.second);
	for(auto p : ww) y = max(y, p.second);
	map<int,int>	xx,yy;
	for(auto p : hh) if (x == p.second) xx[p.first] = 1;
	for(auto p : ww) if (y == p.second) yy[p.first] = 1;
	c = xx.size()*yy.size();
	d = 0;
	for(i=0;i<m;i++) {
		if (xx[hw[i].first]==1 && yy[hw[i].second]==1) d++;
	}
	if (c==d) ans = -1;
	ans += x + y;
	cout << ans << endl;
	return 0;
}

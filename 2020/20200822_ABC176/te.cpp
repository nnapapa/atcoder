//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n;
	ll		ans , ansx = 0;
	ll		ansy = 0;
	string	s;
	cin >> h >> w >> m;

	vector<ll> hh(h+1),ww(w+1);
	unordered_map<ll,int> x , y;
	map<pair<ll,ll>,int> bm;

	for(i=0;i<m;i++) {
		cin >> a >> b;
		hh[a]++;
		ww[b]++;
		x[a]=1;
		y[b]=1;
		bm[make_pair(a,b)] = 1;
	}

	for(auto p : x) {
		i = p.first;
		ansx = max(ansx , hh[i]);
	}
	for(auto p : y) {
		i = p.first;
		ansy = max(ansy , ww[i]);
	}
	ans = ansx + ansy - 1;

	c = 1;
	for(auto p : bm) {
		i = p.first.first;
		j = p.first.second;
		if ((hh[i]==ansx)&&(ww[j]==ansy)) c = 0;
	}
	

	cout << ans+c << endl;
	return 0;
}

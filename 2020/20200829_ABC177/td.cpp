//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = int;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

vector<ll> par(200001);
vector<ll> ank(200001);

ll find(ll x) {
	if (par[x] == x) {
		return x;
	} else {
		return par[x] = find(par[x]);
	}
}

void unite(ll x , ll y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	else if (ank[x] < ank[y]) {
		par[x] = y;
	} else {
		par[y] = x;
		if (ank[x] == ank[y]) ank[x]++;
	}
}

bool same(ll x, ll y) {
	return find(x) == find(y);
}

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;


	cin >> n >> m;
	vector<ll> ans(n);
	
	for(i=0;i<n;i++) {
		par[i] = i;
		ank[i] = 0;
	}

	for(i=0;i<m;i++) {
		cin >> a >> b;
		a--;
		b--;
		unite(a , b);
	}
	for(i=0;i<n;i++) {
		x = find(i);
		ans[x]++;
	}
	y = 0;
	for(i=0;i<n;i++) {
		y = max(y , ans[i]);
	}
	cout << y << endl;
	return 0;
}

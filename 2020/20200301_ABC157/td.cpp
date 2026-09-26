//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = int;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

//蟻本のコード

vector<ll> par(100001);	//要素の親
vector<ll> rnk(100001); //木の高さ(併合時に使う)

ll find(ll x) {			//親ノードを求める
	if (par[x] == x) {
		return x;
	} else {
		return par[x] = find(par[x]);	//辺の縮約(rnkは変えない)
	}
}

void unite(ll x , ll y) {	//ノードを併合
	x = find(x);
	y = find(y);
	if (x == y) return;
	else if (rnk[x] < rnk[y]) {
		par[x] = y;
	} else {
		par[y] = x;
		if (rnk[x] == rnk[y]) rnk[x]++;
	}
}

bool same(ll x, ll y) {
	return find(x) == find(y);
}

int main() {
	ll		a,b,i,j,m,n,k;
	ll		ans;
	map<ll,ll> cnt;

	cin >> n >> m >> k;
	vector<vector<ll>> blk(n+1);
	vector<ll> frd(n+1);

	//初期化
	for(i=1;i<=n;i++) {
		par[i] = i;
		rnk[i] = 0;
	}

	for(i=0;i<m;i++) {
		cin >> a >> b;
		unite(a , b);
		frd[a]++;
		frd[b]++;
	}

	for(i=0;i<k;i++) {
		cin >> a >> b;
		blk[a].push_back(b);
		blk[b].push_back(a);
	}

	//グループ数、親ノードを算出
	for(i=1;i<=n;i++) {
		cnt[find(i)]++;
	}

	for(i=1;i<=n;i++) {
		ll nd = find(i);
		ans = cnt[nd]-frd[i]-1;
		for(j=0;j<blk[i].size();j++) {
			if (find(blk[i][j]) == nd) ans--;
		}
		cout << ans << " ";
	}
	cout << endl;
	/*
	for(i=1;i<=n;i++) {
		cout << i << ":" << par[i] << endl;
	}
	cout << "Group_cnt:" << cnt.size() << endl;		//グループ数
	for(auto p : cnt) {
		cout << "node:" << p.first << " count:" << p.second << endl;
	}
	*/

	return 0;
}

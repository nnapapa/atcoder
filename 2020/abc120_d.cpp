#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

//蟻本のコードにノード情報を追加

vector<ll> par(200001);	//要素の親
vector<ll> rnk(200001); //木の高さ(併合時に使う)
vector<ll> cnt(200001);	//ノードの数
ll node;				//ノードグループの数

ll find(ll x) {			//親ノードを求める
	if (par[x] == x) {
		return x;
	} else {
		return par[x] = find(par[x]);	//辺の縮約(rnkは高速化のため変えない)
	}
}

void unite(ll x , ll y) {	//ノードを併合
	x = find(x);
	y = find(y);
	if (x == y) return;
	else if (rnk[x] < rnk[y]) {
		par[x] = y;
		cnt[y] += cnt[x];
		cnt[x] = 0;
		node--;
	} else {
		par[y] = x;
		if (rnk[x] == rnk[y]) rnk[x]++;
		cnt[x] += cnt[y];
		cnt[y] = 0;
		node--;
	}
}

ll gcount() {				//ノードグループの数を求める
	return node;
}

ll ncount(ll x) {			//xが属するノードの数を求める
	return cnt[find(x)];
}

bool same(ll x, ll y) {		//xとyが同じノードか判定する
	return find(x) == find(y);
}

int main() {
	ll		i,j,m,n;

	cin >> n >> m;
	vector<ll> a(m),b(m),ans(m+1);

	//初期化
	for(i=1;i<=n;i++) {
		par[i] = i;
		rnk[i] = 0;
		cnt[i] = 1;
		node   = n;
	}

	for(i=0;i<m;i++) {
		cin >> a[i] >> b[i];
	}

	ans[m] = n*(n-1)/2;
	for(i=m-1;i>0;i--) {
		//cout << "node=" << gcount() << " -> ";
		ll t = ncount(a[i]) * ncount(b[i]);
		if (same(a[i],b[i])) t = 0;
		unite(a[i],b[i]);
		ans[i] = ans[i+1] - t;
		//cout << gcount() << endl;
	}
	//for(i=1;i<=n;i++) cout << i << ":" << par[i] << ":" << cnt[i] << endl;
	//cout << endl;
	for(i=1;i<=m;i++) {
		cout << ans[i] << endl;
	}

	return 0;
}

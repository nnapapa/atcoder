#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL
typedef pair<ll,ll> P;
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;

//単一始点最短路問題(ダイクストラ法)
//n頂点、m個の経路(A<->B経路のコストC)、のとき、頂点startから頂点endの最短路を求める。

	cin >> n >> m;
	vector<ll>	ans(n+1,INFL);
	vector<ll>	A(m),B(m),C(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i] >> C[i];
	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1),GB(n+1);
	for(i=0;i<m;i++) {
		if (A[i]==B[i]) {
			ans[A[i]] = min(ans[A[i]] , C[i]);
			continue;
		}
		struct edge ed;
		ed.to = B[i];
		ed.cost = C[i];
		G[A[i]].push_back(ed);
    //両方向の場合
		ed.to = A[i];
		ed.cost = C[i];
		GB[B[i]].push_back(ed);
	}
	//for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL),DB(n+1,INFL);
	for(x=1;x<=n;x++) {
		for(i=1;i<=n;i++) D[i] = DB[i] = INFL;
		D[x] = 0;
		que.push(P(0,x));
		while(!que.empty()) {
			P p = que.top(); que.pop();
			ll v = p.second;
			if (D[v] < p.first) continue;
			for(i=0;i<G[v].size();i++) {
				struct edge e = G[v][i];
				if (D[e.to] > D[v] + e.cost) {
					D[e.to] = D[v] + e.cost;
					que.push( P(D[e.to],e.to) );
				}
			}
		}
		DB[x] = 0;
		que.push(P(0,x));
		while(!que.empty()) {
			P p = que.top(); que.pop();
			ll v = p.second;
			if (DB[v] < p.first) continue;
			for(i=0;i<GB[v].size();i++) {
				struct edge e = GB[v][i];
				if (DB[e.to] > DB[v] + e.cost) {
					DB[e.to] = DB[v] + e.cost;
					que.push( P(DB[e.to],e.to) );
				}
			}
		}
		for(i=1;i<=n;i++) if (i!=x) ans[x] = min(ans[x] , D[i] + DB[i]);

	}

	for(i=1;i<=n;i++) {
		if (ans[i]>=INFL) ans[i] = -1;
		cout << ans[i] << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
typedef pair<ll,ll> P;

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;

//単一始点最短路問題(ダイクストラ法)
//n頂点、m個の経路(A<->B経路のコストC)、のとき、頂点startから頂点endの最短路を求める。

	cin >> n >> m;
	ll start = 1;
	ll end = n;
	vector<ll>	A(m),B(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i];
	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<m;i++) {
		struct edge ed;
		ed.to = B[i];
		ed.cost = 1;
		G[A[i]].push_back(ed);
    //両方向の場合
		ed.to = A[i];
		ed.cost = 1;
		G[B[i]].push_back(ed);
	}
	//for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL),prev(n+1,-1),num(n+1,0);
	D[start] = 0;
	num[start] = 1;
	que.push(P(0,start));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (D[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			if (D[e.to] > D[v] + e.cost) {
				D[e.to] = D[v] + e.cost;
				num[e.to] = num[v];
        prev[e.to] = v;
				que.push( P(D[e.to],e.to) );
			} else if (D[e.to]==D[v]+e.cost) {
				num[e.to] += num[v];
				num[e.to] %= 1000000007;
			}
		}
	}
	if (D[end]==INFL) D[end]=-1;
	cout << num[end] << endl;

	return 0;
}

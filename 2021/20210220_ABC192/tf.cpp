#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
typedef pair<ll,ll> P;

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,start,end;
//単一始点最短路問題(ダイクストラ法)
//n頂点、m個の経路(A<->B経路のコストC)、のとき、頂点startから頂点endの最短路を求める。
	cin >> n >> m >> start >> end;
	vector<ll>	A(m),B(m),C(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i] >> C[i] >> a;
	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<m;i++) {
		struct edge ed;
		ed.to = B[i];
		ed.cost = C[i];
		G[A[i]].push_back(ed);
    //両方向の場合
		ed.to = A[i];
		ed.cost = C[i];
		G[B[i]].push_back(ed);
	}

	for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL),prev(n+1,-1);
	D[start] = 0;
	que.push(P(0,start));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (D[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			if (D[e.to] > D[v] + e.cost) {
				D[e.to] = D[v] + e.cost;
				prev[e.to] = v;
				que.push( P(D[e.to],e.to) );
			}
		}
	}
	if (D[end]==INFL) D[end]=-1;
	cout << D[end] << endl;
  //経路を復元する場合
	for(i=1;i<=n;i++) cout << " " << prev[i]; cout << endl;
  vector<ll> path;
  for(i=end;i!=-1;i=prev[i]) path.push_back(i);
  reverse(path.begin(),path.end());
  cout << path[0]; for(i=1;i<path.size();i++) cout << " " << path[i]; cout << endl;
	return 0;
}

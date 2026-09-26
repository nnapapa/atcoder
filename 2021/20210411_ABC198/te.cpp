#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	vector<ll>		ans;
	string	s;
	cin >> n;

//単一始点最短路問題(ダイクストラ法)
//n頂点、m個の経路(A<->B経路のコストC)、のとき、頂点startから頂点endの最短路を求める。
	typedef pair<ll,ll> P;
	vector<ll> C(n+1);
	for(i=1;i<=n;i++) cin >> C[i];
	int start = 1;
	
	vector<ll>	A(n-1),B(n-1);
	for(i=0;i<n-1;i++) cin >> A[i] >> B[i];
	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<n-1;i++) {
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
	//if (D[end]==INFL) D[end]=-1;
	//cout << D[end] << endl;
  //経路を復元する場合
	//for(i=1;i<=n;i++) cout << " " << prev[i]; cout << endl;
  vector<ll> path(n+1);
	for(j=1;j<=n;j++) {
		for(k=0;k<n;k++) path[k]=0;
		m = 0;
  	for(i=j;i!=-1;i=prev[i]) path[m++] = i;
		bool f = true;
  	for(k=1;k<m;k++) if (C[j]==C[path[k]]) f = false;
		if (f) ans.push_back(j);
	}

	for(i=0;i<ans.size();i++) cout << ans[i] << endl;
	return 0;
}

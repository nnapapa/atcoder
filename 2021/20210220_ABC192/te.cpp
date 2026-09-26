#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
typedef pair<ll,ll> P;

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,w,x,y,z;
	ll		ans = 0;

	cin >> n >> m >> x >> y;
	vector<ll>	A(m),B(m),T(m),K(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i] >> T[i] >> K[i];
	struct edge { ll to, t , k;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<m;i++) {
		struct edge ed;
		ed.to = B[i];
		ed.t = T[i];
		ed.k = K[i];
		G[A[i]].push_back(ed);
		ed.to = A[i];
		ed.t = T[i];
		ed.k = K[i];
		G[B[i]].push_back(ed);
	}
	/*
	for(i=1;i<=n;i++) {
		cout << i << ":";
		for(j=0;j<G[i].size();j++) {
			cout << G[i][j].to << " " << G[i][j].t << " " << G[i][j].k << endl;
 		}
	}
	*/
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> d(n+1,INFL);
	d[x] = 0;
	que.push(P(0,x));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (d[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			ll machi = 0;
			if (d[v]%e.k) machi = e.k - d[v]%e.k;
			if (d[e.to] > d[v] + e.t + machi) {
				d[e.to] = d[v] + e.t + machi;
				que.push(P(d[e.to],e.to));
			}
			//cout << d[y] << endl;
		}
	}
	if (d[y]==INFL) d[y]=-1;
	cout << d[y] << endl;
	return 0;
}

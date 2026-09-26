#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
typedef pair<ll,ll> P;
struct edge { ll to, cost;};
vector<vector<struct edge>> G(401);
ll n,m;

ll calc(ll start , ll k) {
	//cout << "calc:" << start << " " << end << " " << k << endl;
	//if (start==end) return 0;
	ll i;
		//for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL);
	D[start] = 0;
	que.push(P(0,start));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (v > k && v!=start) continue;
		if (D[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			if (D[e.to] > D[v] + e.cost) {
				D[e.to] = D[v] + e.cost;
				que.push( P(D[e.to],e.to) );
			}
		}
	}
	ll ret = 0;
	for(i=0;i<n;i++) {
		if (D[i]!=INFL) ret += D[i];
	}
	return ret;

}

int main() {
	ll		s,t,a,b,c,d,h,i,j,k,l,v,w,x,y,z;
	ll		ans = 0;

	cin >> n >> m;
	vector<ll>	A(m),B(m),C(m);
	for(i=0;i<m;i++) cin >> A[i] >> B[i] >> C[i];

	for(i=0;i<m;i++) {
		struct edge ed;
		ed.to = B[i]-1;
		ed.cost = C[i];
		G[A[i]-1].push_back(ed);
	}
	for(s=0;s<n;s++) for(k=0;k<n;k++) ans += calc(s , k);

	cout << ans << endl;
	return 0;
}

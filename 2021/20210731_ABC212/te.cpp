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
	ll		ans = 0;
	cin >> n >> m >> k;
	map<ll,ll>	ng;
	for(i=0;i<m;i++) {
		cin >> a >> b;
		a--; b--;
		ng[a*6000+b]++;
		ng[b*6000+a]++;
	}

	struct edge { ll to, cost;};
	vector<vector<struct edge>> G(n+1);
	for(i=0;i<n;i++) for(j=0;j<n;j++) {
		if (i==j) continue;
		if (ng[i*6000+j]>0) continue;
		struct edge ed;
		ed.to = j;
		ed.cost = 1;
		G[i].push_back(ed);
		ed.to = i;
		ed.cost = 1;
		G[j].push_back(ed);
	}
	//for(i=1;i<=n;i++) for(j=0;j<G[i].size();j++) cout << i << "->" << G[i][j].to << "(" << G[i][j].cost << ")" << endl;
	priority_queue<P,vector<P>,greater<P> > que;
	vector<ll> D(n+1,INFL),prev(n+1,-1),num(n+1,0);
	ll start = 0;
	D[start] = 0;
	num[start] = 1; 												//最短経路本数計算
	que.push(P(0,start));
	while(!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (D[v] < p.first) continue;
		for(i=0;i<G[v].size();i++) {
			struct edge e = G[v][i];
			if (D[e.to] > D[v] + e.cost) {
				D[e.to] = D[v] + e.cost;
				num[e.to] = num[v]; 							//最短経路本数計算
        prev[e.to] = v;										//経路復元用
				que.push( P(D[e.to],e.to) );
			}
			else if (D[e.to]==D[v]+e.cost) {		//最短経路本数計算
				num[e.to] += num[v]; 							//最短経路本数計算
				num[e.to] %= 1000000007; 					//最短経路本数計算
			}
		}
	}

	vector<vector<ll>>	dp2(k+1 , vector<ll>(n+1,0));
	for(c=0;c<=k;c++) dp2[c][0] = 1;
	for(c=k-1;c>=0;c--) {
		for(i=0;i<n;i++) {
			if (c>D[i]) {
				dp2[c][i] = (dp2[c+1][i] + dp2[c][i-1])%998244353;
			} else dp2[c][i] = dp2[c+1][i];
		}
	}

	cout << dp2[0][0] << endl;
	return 0;
}

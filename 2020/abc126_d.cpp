#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,u;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	t(n+1,-1);
	map<ll,map<ll,ll>> uvw;
	for(i=0;i<n-1;i++) {
		cin >> u >> v >> w;
		uvw[u][v] = w;
		uvw[v][u] = w;
	}
	queue<ll> que;
	que.push(1);
	t[1] = 0;
	while(que.size()) {
		x = que.front();
		que.pop();
		for(auto p:uvw[x]) {
			if (t[p.first] == -1) {
				que.push(p.first);
				t[p.first] = t[x] + p.second;
			}
		}
	}
	//for(i=1;i<=n;i++) cout << i << " " << t[i] << endl;
	for(i=1;i<=n;i++) {
		cout << (t[i]&1) << endl;
	}
	return 0;
}

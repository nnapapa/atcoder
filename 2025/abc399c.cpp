#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	U(n),V(n),N(n+1,0),M(m,0);
	map<ll,vector<ll>> mp;
	map<pair<ll,ll>,ll> MM;
	for(i=0;i<m;i++) cin >> U[i] >> V[i];
	for(i=0;i<m;i++) {
		mp[U[i]].push_back(V[i]);
		mp[V[i]].push_back(U[i]);
		MM[make_pair(U[i],V[i])] = i;
	}
	queue<ll> que;
	for(i=1;i<=n;i++) {
		if (N[i]==0) que.push(i);
		N[i] = 1;
		while(que.size()) {
			a = que.front();
			que.pop();
			for(i=0;i<mp[a].size();i++) {
				b = mp[a][i];
				j = MM[make_pair(min(a,b),max(a,b))];
				if (M[j]) continue;
				M[j] = 1;
				if (N[b]) ans++;
				else {
					que.push(b);
					N[b] = 1;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}

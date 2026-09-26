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
	map<ll,vector<ll>> mp;
	for(i=0;i<m;i++) {
		cin >> a >> b;
		mp[a].push_back(b);
	}
	vector<ll> C(n+1);
	queue<ll> que;
	for(i=1;i<=n;i++) {
		for(x=0;x<=n;x++) C[x] = 0;
		que.push(i);
		c = 0;
		while(que.size()) {
			a = que.front();
			que.pop();
			if (C[a]==0) {
				C[a] = 1;
				c++;
				for(j=0;j<mp[a].size();j++) {
					que.push(mp[a][j]);
				}
			}
		}
		ans += c;
	}
	cout << ans << endl;
	return 0;
}

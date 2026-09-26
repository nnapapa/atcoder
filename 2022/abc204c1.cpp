#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll> C(2001);
void dfs(map<ll,vector<ll>> &mp, ll idx) {
	if (C[idx]) return;
	C[idx] = 1;
	for(ll i=0;i<mp[idx].size();i++) dfs(mp, mp[idx][i]);
}
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
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) C[j] = 0;
		dfs(mp, i);
		for(j=1;j<=n;j++) ans += C[j];
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

map<ll,vector<ll>> uv;
map<ll,ll> ct;
vector<ll>	A,ans,H;
ll f;

void calc(ll x) {
	ll	i,j,k;
	H[x] = 1;
	if (++ct[A[x]]==2) f++;
	ans[x] = f;
	for(i=0;i<uv[x].size();i++) {
		j = uv[x][i];
		if (H[j]) continue;
		calc(j);
	}
	if (--ct[A[x]]==1) f--;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> a;
		A.push_back(a);
		ans.push_back(0);
		H.push_back(0);
	}
	for(i=0;i<n-1;i++) {
		cin >> u >> v;
		uv[u-1].push_back(v-1);
		uv[v-1].push_back(u-1);
	}
	f = 0;
	calc(0);
	
	for(i=0;i<n;i++) cout << (ans[i] ? "Yes" : "No") << endl;
	return 0;
}

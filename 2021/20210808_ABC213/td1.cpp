#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll>	A(200001,0),ANS;
vector<vector<ll>> AB(200001);

void dfs(ll cur) {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ANS.push_back(cur);
	A[cur] = 1;
	if (cur==1 && ANS.size()>1) return;
	for(i=0;i<AB[cur].size();i++) {
		if (A[AB[cur][i]]==0) { dfs(AB[cur][i]); ANS.push_back(cur); }
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;

	cin >> n;
	
	for(i=1;i<n;i++) {
		cin >> a >> b;
		AB[a].push_back(b);
		AB[b].push_back(a);
	}
	for(i=1;i<=n;i++) sort(AB[i].begin(),AB[i].end());

	dfs(1);

	cout << "1";
	for(i=1;i<ANS.size();i++) cout << " " << ANS[i];
	cout << endl;
	return 0;
}

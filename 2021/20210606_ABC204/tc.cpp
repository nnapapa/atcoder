#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffLL

vector<vector<ll>>	AB(2000,vector<ll>(2000,INFL)),ab(2000),memo(2000,vector<ll>(2000,0));
vector<ll> mm(2000,0);
void dfs(ll idx) {
	mm[idx] = 1;
	for(int i=0;i<ab[idx].size();i++) {
		if (mm[ab[idx][i]]==0) dfs(ab[idx][i]);
		memo[idx][ab[idx][i]] = 1;
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> m;

	for(i=0;i<m;i++) {
		cin >> a >> b;
		AB[a-1][b-1] = 1;
		ab[a-1].push_back(b-1);
	}
	for(i=0;i<n;i++) memo[i][i] = 1;
	for(i=0;i<n;i++) dfs(i);

	for(i=0;i<n;i++) for(j=0;j<n;j++) if (memo[i][j]) ans++;

	cout << ans << endl;
	return 0;
}

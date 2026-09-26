#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	vector<ll>		ans(0);
	cin >> n >> m;
	priority_queue<ll,vector<ll>, greater<ll>> que;

	vector<vector<ll>>	AB(n+1);
	vector<ll> BN(n+1,0);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		AB[a].push_back(b);
		BN[b]++;
	}

	for(i=1;i<=n;i++) if (BN[i]==0) que.push(i);
	//cout << que.size() << endl;
	while(que.size() != 0) {
		a = que.top();
		ans.push_back(a);
		que.pop();
		for(i=0;i<AB[a].size();i++) {
			if (--BN[AB[a][i]] ==0) que.push(AB[a][i]);
		}
	}

	if (ans.size() != n) cout << -1;
	else for(i=0;i<ans.size();i++) cout << ans[i] << " ";
	cout << endl;

	return 0;
}

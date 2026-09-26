#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,r,u,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	vector<ll> S(n+1,0);
	vector<vector<ll>> C(n+1);
	queue<ll> q;
	for(i=1;i<=n;i++) {
		cin >> a >> b;
		C[a].push_back(i);
		C[b].push_back(i);
		if (a==0 && b==0) {
			q.push(i);
		};
	}
	while(q.size()) {
		j = q.front();
		q.pop();
		if (S[j]==0) {
			S[j] = 1;
			for(auto p : C[j]) {
				if (S[p]==0) {
					q.push(p);
				}
			}
		}
	}
	for(i=1;i<=n;i++) if (S[i]) ans++;
	cout << ans << endl;
	return 0;
}

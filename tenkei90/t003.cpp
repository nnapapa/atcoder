#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<vector<ll>>	A(n+1);
	for(i=1;i<n;i++) {
		cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	vector<ll> ct0(n+1,0),ct1(n+1,0);
	queue<ll> q;

	q.push(1);
	while(q.size()) {
		a = q.front();
		q.pop();
		for(i=0;i<A[a].size();i++) {
			if (ct0[ A[a][i] ] ) continue;
			if (A[a][i]==1) continue;
			ct0[ A[a][i] ] = ct0[a]+1;
			q.push(A[a][i]);
		}
	}
	a = 0;
	for(i=1;i<=n;i++) {
		if (a<ct0[i]) {
			a = ct0[i];
			ans = i;
		}
	}
	//for(i=1;i<=n;i++) cout << ct0[i] << " ";
	//cout << endl;
	q.push(ans);
	while(q.size()) {
		a = q.front();
		q.pop();
		for(i=0;i<A[a].size();i++) {
			if (ct1[ A[a][i] ] ) continue;
			if (A[a][i]==ans) continue;
			ct1[ A[a][i] ] = ct1[a]+1;
			q.push(A[a][i]);
		}
	}
	ans = 0;
	for(i=1;i<=n;i++) ans = max(ans,ct1[i]);
	//for(i=1;i<=n;i++) cout << ct1[i] << " ";
	//cout << endl;
	cout << ans+1 << endl;
	return 0;
}

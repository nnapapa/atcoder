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
	cin >> n;
	vector<vector<ll>>	A(n+1);
	vector<ll> ANS(n+1,0);
	for(i=1;i<=n;i++) {
		cin >> t >> k;
		A[i].push_back(t);
		for(j=1;j<=k;j++) {
			cin >> a;
			A[i].push_back(a);
		}
	}

	queue<ll> que;
	que.push(n);
	while(que.size()) {
		a = que.front();
		que.pop();
		ANS[a] = A[a][0];
		for(i=1;i<A[a].size();i++) {
			if (ANS[A[a][i]] == 0) que.push(A[a][i]);
		}
	}
	for(i=1;i<=n;i++) ans += ANS[i];
	cout << ans << endl;
	return 0;
}

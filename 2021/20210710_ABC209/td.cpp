#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffff

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<vector<int>> D(n);
	vector<string> A(q);
	vector<ll> F(n,0);
	for(i=1;i<n;i++) {
		cin >> a >> b;
		D[a-1].push_back(b-1);
		D[b-1].push_back(a-1);
	}
	queue<ll> Q;
	Q.push(0);
	F[0] = 1;
	while(Q.size()) {
		a = Q.front();
		Q.pop();
		x = F[a] + 1;
		for(i=0;i<D[a].size();i++) {
			j = D[a][i];
			if (F[j]==0) {
				F[j] = x;
				Q.push(j);
			}
		}
	}
	for(i=0;i<q;i++) {
		cin >> c >> d;
		if (F[c-1]%2 != F[d-1]%2) A[i] = "Road";
		else A[i] = "Town";
	}
	for(i=0;i<q;i++) cout << A[i] << endl;
	return 0;
}

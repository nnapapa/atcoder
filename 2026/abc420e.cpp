#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll> A(n+1,0),S(n+1,0);
	dsu ds(n+1);
	for(i=0;i<q;i++) {
		cin >> a;
		if (a==1) {
			cin >> u >> v;
			if (ds.same(u,v)==false) {
				x = ds.leader(u);
				y = ds.leader(v);
				l = ds.merge(u,v);
				if (x==l) A[l] += A[y];
				else A[l] += A[x];
			}
		} else if (a==2) {
			cin >> v;
			x = ds.leader(v);
			if (S[v]) A[x]--;
			else A[x]++;
			S[v] = (S[v]+1)%2;
		} else {
			cin >> v;
			x = ds.leader(v);
			if (A[x]>0) cout << "Yes\n";
			else cout << "No\n";
		}
	}
	return 0;
}

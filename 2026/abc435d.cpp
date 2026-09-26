#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

map<ll,vector<ll>>	xy;

void mark(ll *a, ll p) {
	for(auto i:xy[p]) {
		if (a[i]==0) {
			a[i] = 1;
			mark(a, i);
		}
	} 
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	string	s;
	cin >> n >> m;
	ll A[n+1] = {0};
	for(i=0;i<m;i++) {
		cin >> x >> y;
		xy[y].push_back(x);
	}
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> n >> v;
		if (n==1) {
			if (A[v]==0) {
				A[v] = 1;
				mark(A, v);
			}
		} else {
			s = "No";
			if (A[v]) s = "Yes";
			cout << s << endl;
		}

	}
	return 0;
}

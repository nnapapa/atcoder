#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = -1;
	string	s;
	cin >> n;
	map<ll,ll>	A;
	vector<ll> P(n);
	for(i=0;i<n;i++) {
		cin >> P[i];
		A[P[i]]++;
	}
	a = -1;
	for(auto p : A) {
		if (p.second == 1) a = max(a, p.first);
	}
	if (a>=0) {
		for(i=0;i<n;i++) {
			if (P[i]==a) cout << i+1 << endl;
		}
	} else { cout << "-1\n"; }
	return 0;
}

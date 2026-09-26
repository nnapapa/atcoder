#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,e,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	vector<ll>	E(n), A(n), D(n);
	for(i=0;i<n;i++) cin >> E[i] >> A[i] >> D[i];
	//map<ll, ll> tlb;
	unordered_map<ll, ll> tlb;
	for(i=0;i<n;i++) {
		k = (E[i] << 32) + A[i];
		if (tlb.count(k)==0) {
			tlb[k] = D[i];
		}
	}
	for(auto p : tlb) {
		e = p.first >> 32;
		a = p.first & 0xffffffff;
		d = p.second;
		cout << p.first << " " << e << " " << a << " " << d << endl;
	}

	return 0;
}

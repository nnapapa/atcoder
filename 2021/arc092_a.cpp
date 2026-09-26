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
	map<ll,ll> ab,cd;
	for(i=0;i<n;i++) {
		cin >> a >> b;
		ab[a] = b;
	}
	for(i=0;i<n;i++) {
		cin >> a >> b;
		cd[a] = b;
	}	
	for(auto p:cd) {		//blue
		c = p.first; d = p.second;
		ll prea = -1 , preb = -1;
		for(auto q:ab) {	//red
			a = q.first; b = q.second;
			if (a>c) break;
			if (b<d) {
				if (preb < b) {
					prea = a;
					preb = b;
				}
			}
		}
		if (prea != -1) {
			ab.erase(prea);
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}

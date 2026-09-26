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
	vector<ll>	A(400001,0),K(400001,0);
	vector<pair<ll,ll>> ab(n),ba(n);
	for(i=0;i<n;i++) {
		cin >> a >> b;
		A[a]++;
		A[b]++;
		ab[i] = make_pair(a,b);
		ba[i] = make_pair(b,a);
	}
	x = n;
	for(i=0;i<n;i++) {
		a = ab[i].first; b = ab[i].second;
		if (A[a]==1) {
			K[a] = 1;
			ab[i] = ba[i] = make_pair(0,0);
			A[a] = 0;
			x--;
		} else if (A[b]==1) {
			K[b] = 1;
			ab[i] = ba[i] = make_pair(0,0);
			A[b] = 0;
			x--;
		}
	}
	for(i=0;i<n;i++) {
		a = ab[i].first; b = ab[i].second;
		if (a==0) continue;
		if (a==b) {
			K[a] = 1;
			ab[i] = ba[i] = make_pair(0,0);
			A[a] -= 2;
			x--;
		}
	}
	while(x>0) {
		bool f = true;
		for(i=0;i<n;i++) {
			a = ab[i].first; b = ab[i].second;
			if (a==0) continue;
			if (K[a]) {
				K[b]++;
				ab[i] = ba[i] = make_pair(0,0);
				x--;
				f = false;
			} else if (K[b]) {
				K[a]++;
				ab[i] = ba[i] = make_pair(0,0);
				x--;
				f = false;
			}
		}
		if (f) break;
	}
	for(i=0;i<n;i++) {
		a = ab[i].first; b = ab[i].second;
		if (a==0) continue;
		if (K[a]==0) {
			K[a]++;
		} else if (K[b]==0) {
			K[b]++;
		}
	}

	for(i=1;i<=400000;i++) if (K[i]) ans++;

	cout << ans << endl;
	return 0;
}

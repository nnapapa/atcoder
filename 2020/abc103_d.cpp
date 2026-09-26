#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<pair<ll,ll>>	ab(m);
	map<ll,ll> brg;
	for(i=0;i<m;i++) cin >> ab[i].first >> ab[i].second;
	sort(ab.begin(),ab.end());
	reverse(ab.begin(),ab.end());
	x = n+1;
	for(i=0;i<m;i++) {
		if (ab[i].second<=x) {
			ans++;
			x=ab[i].first;
		}
	}

	cout << ans << endl;
	return 0;
}

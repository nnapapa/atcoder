#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	string	ans = "";
	string	s;
	cin >> n >> r >> c >> s;
	map<char,pair<ll,ll>> D;
	set<pair<ll,ll>> F;
	ll zr,zc;
	zr = zc = 0;
	D['N'] = make_pair(+1,0);
	D['W'] = make_pair(0,+1);
	D['S'] = make_pair(-1,0);
	D['E'] = make_pair(0,-1);
	F.insert(make_pair(zr,zc));
	for(i=0;i<n;i++) {
		zr += D[s[i]].first;
		zc += D[s[i]].second;
		r += D[s[i]].first;
		c += D[s[i]].second;
		F.insert(make_pair(zr,zc));
		if (F.count(make_pair(r,c))) ans += '1';
		else ans += '0';
	}

	cout << ans << endl;
	return 0;
}

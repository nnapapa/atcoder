#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,r,m,n,v,w,x,y,z,q,nn;
	cin >> h >> w >> d;
	vector<vector<ll>> a(h, vector<ll>(w));
	vector<pair<ll,ll>>	an(h*w+1);
	vector<ll> p(h*w+1,0),psum(h*w+1,0);
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		cin >> a[i][j];
		an[ a[i][j] ] = make_pair(i,j);
	}

	for(i=1;i<=d;i++) {
		n = i;
		nn = n + d;
		while(nn<=h*w) {
			p[nn] = abs(an[n].first - an[nn].first) + abs(an[n].second - an[nn].second);
			psum[nn] = psum[n] + p[nn];
			n += d;
			nn+= d;
		}
	}

	cin >> q;
	vector<ll> ans(q);
	for(i=0;i<q;i++) {
		cin >> l >> r;
		ans[i] = psum[r] - psum[l];
	}
	for(i=0;i<q;i++) cout << ans[i] << endl;
	//for(i=1;i<=h*w;i++) cout << p[i] << " " << psum[i] << endl;
	return 0;
}

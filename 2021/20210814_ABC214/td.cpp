#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,u,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<tuple<ll,ll,ll>>	wuv(n-1);
	for(i=0;i<n-1;i++) {
		cin >> u >> v >> w;
		wuv[i] = make_tuple(w,u-1,v-1);
	}
	sort(wuv.begin(),wuv.end());

	dsu d(n);
  for (i = 0; i < n-1; i++) {
		tie(w,u,v) = wuv[i];
		ans += w * d.size(u) * d.size(v);
    d.merge(u , v);
  }

	cout << ans << endl;
	return 0;
}

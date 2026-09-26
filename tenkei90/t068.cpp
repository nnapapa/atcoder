#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,q,c,h,i,j,k,l,m,n,t,v,w,x,y,z;
	cin >> n >> q;
	vector<ll> ans;
	vector<ll>	V(n);
	dsu d(n);
	for(z=0;z<q;z++) {
		cin >> t >> x >> y >> v;
		x--;y--;
		if (t==0) {
			d.merge(x,y);
			V[y]=v;
		} else {
			if (d.same(x,y)) {
				a = v;
				if (x<y) {
					for(i=x+1;i<=y;i++) {
						a = V[i] - a;
					}
				} else {
					for(i=x;i>=y+1;i--) {
						a = V[i] - a;
					}
				}
				ans.push_back(a);
			} else {
				ans.push_back(-1);
			}
		}
	}

	for(i=0;i<ans.size();i++) {
		if (ans[i]==-1) cout << "Ambiguous" << endl;
		else cout << ans[i] << endl;
	}
	return 0;
}

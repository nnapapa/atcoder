#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = int;
#define INFL 0x6fffffffffffffffLL
int op(ll a, ll b) { return a^b; }
int e() { return 99999; }

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,q,t;
	cin >> n >> q;
	vector<ll>	a(n);
	for(i=0;i<n;i++) cin >> a[i];
	segtree<ll,op,e> seg(a);

	for(i=0;i<q;i++) {
		cin >> t >> x >> y;
		x--;
		if (t==1) {
			seg.set(x , seg.get(x) ^ y);
		} else {
			cout << seg.prod(x,y) << endl;
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	//cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
int idx(ll x , ll y) { return x*3000 + y; }
int main() {
	ll		a,b,c,h,i,q,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w >> q;
	vector<vector<ll>>	masu(h+2 , vector<ll>(w+2,0));
	dsu	d(2001*3000);
	for(i=0;i<q;i++) {
		cin >> a;
		if (a==1) {
			cin >> x >> y;
			masu[x][y] = 1;
			if (masu[x-1][y]) d.merge(idx(x-1,y) , idx(x,y));
			if (masu[x+1][y]) d.merge(idx(x+1,y) , idx(x,y));
			if (masu[x][y-1]) d.merge(idx(x,y-1) , idx(x,y));
			if (masu[x][y+1]) d.merge(idx(x,y+1) , idx(x,y));
		} else {
			cin >> a >> b;
			cin >> x >> y;
			if (masu[a][b] && masu[x][y] && d.leader(idx(a,b))==d.leader(idx(x,y)) ) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}

	return 0;
}

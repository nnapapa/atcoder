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
	cin >> h >> w >> n;
	vector<ll>	aa(n+1);
	vector<vector<ll>> masu(h, vector<ll>(w));
	for(i=1;i<=n;i++) cin >> aa[i];
	x = 1;
	c = 0;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			if (c!=aa[x]) {
				c++;
			} else {
				x++;
				c = 1;
			}
			masu[i][j] = x;
		}
	}
	for(i=1;i<h;i+=2) {
		reverse(masu[i].begin(),masu[i].end());
	}
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			cout << masu[i][j];
			if (j!=w-1) cout << ' ';
		}
		cout << endl;
	}

	return 0;
}

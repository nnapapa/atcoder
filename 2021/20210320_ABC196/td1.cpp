#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll h,w,a,b,ans;

vector<vector<int>> masu(17,vector<int>(17,1));

ll calc(ll hh , ll ww , ll aa , ll bb) {
	//cout << hh << " " << ww << " " << aa << " " << bb << " : " << endl;
	ll ret = 0;
	if (aa==a && bb==b) {
		//cout << "ret1" << endl;
		return 1;
	}
	if (bb<b) {
		if (masu[hh][ww]==0) {
			masu[hh][ww] = 1;
			if (ww<w-1) ret += calc(hh,ww+1,aa,bb+1);
			else ret += calc(hh+1,0,aa,bb+1);
			masu[hh][ww] = 0;
		}
	}
	if (aa<a) {
		if (masu[hh][ww]==0 && masu[hh][ww+1]==0) {
			masu[hh][ww] = masu[hh][ww+1] = 1;
			if (ww<w-2) ret += calc(hh,ww+2,aa+1,bb);
			else ret += calc(hh+1,0,aa+1,bb);
			masu[hh][ww] = masu[hh][ww+1] = 0;
		}
		if (masu[hh][ww]==0 && masu[hh+1][ww]==0) {
			masu[hh][ww] = masu[hh+1][ww] = 1;
			if (ww<w-1) ret += calc(hh,ww+1,aa+1,bb);
			else ret += calc(hh+1,0,aa+1,bb);
			masu[hh][ww] = masu[hh+1][ww] = 0;
		}
	}
	if (masu[hh][ww]==1) {
		if (ww<w-1) ret += calc(hh,ww+1,aa,bb);
		else ret += calc(hh+1,0,aa,bb);
	}
	//cout << ret << endl;
	return ret;
}

int main() {
	cin >> h >> w >> a >> b;
	for(ll i=0;i<h;i++) for(ll j=0;j<w;j++) masu[i][j] = 0;
	ans = calc(0,0,0,0);
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll h,w,a,b,ans;
map<vector<vector<int>>,int> mp;
void calc(vector<vector<int>> masu, ll aa , ll bb) {
	//vector<vector<int>> masu(16,vector<int>(16));
	//masu = ma;
	/*cout << aa << ' ' << bb << endl;
	for(int i=0;i<h;i++) {
		for(int j=0;j<w;j++) {
			cout << masu[i][j];
		}
		cout << endl;
	}*/
	if (aa==a && bb==b) {
		bool f = true;
		//vector<int> dt(h*w);
		/*for(int i=0;i<h;i++) for(int j=0;j<w;j++) {
			if (masu[i][j]==0) f = false;
			//dt[i*w+j] = masu[i][j];
		}*/
		if (f) {
			if (mp[masu]==0) {
				ans++;
				//cout << "ans = " << ans << endl;
			}
			mp[masu] = 1;
		}
		return;
	}
	if (aa<a) {
		for(int i=0;i<h;i++) {
			bool f = false;
			for(int j=0;j<w-1;j++) {
				if (masu[i][j]==0 && masu[i][j+1]==0) {
					masu[i][j] = 2; masu[i][j+1] = 3;
					calc(masu,aa+1,bb);
					masu[i][j] = 0; masu[i][j+1] = 0;
					f = true;
					break;
				}
			}
			if (f) break;
		}
		for(int i=0;i<h-1;i++) {
			bool f = false;
			for(int j=0;j<w;j++) {
				if (masu[i][j]==0 && masu[i+1][j]==0) {
					masu[i][j] = 4; masu[i+1][j] = 5;
					calc(masu,aa+1,bb);
					masu[i][j] = 0; masu[i+1][j] = 0;
					f = true;
					break;
				}
			}
			if (f) break;
		}
	}
	if (bb<b) {
		for(int i=0;i<h;i++) {
			bool f = false;
			for(int j=0;j<w;j++) {
				if (masu[i][j]==0) {
					masu[i][j] = 1;
					calc(masu,aa,bb+1);
					masu[i][j] = 0;
					f = true;
					break;
				}
			}
			if (f) break;
		}
	}

}

int main() {
	ll		c,d,i,j,k,l,m,n,v,x,y,z;
	cin >> h >> w >> a >> b;
	vector<vector<int>> masu(16,vector<int>(16,0));
	ans = 0;
	calc(masu,0,0);

	cout << ans << endl;
	return 0;
}

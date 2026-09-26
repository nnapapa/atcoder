#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	vector<vector<ll>>	masu(h , vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> masu[i][j];
	vector<pair<ll,ll>> moto,saki;

	for(i=0;i<h;i++) {
		if (i&1) {
			for(j=w-1;j>=0;j--) {
				if (masu[i][j]&1) {
					if (j!=0) {
						saki.push_back(make_pair(i,j-1));
						masu[i][j-1]++;
					} else if (i!=h-1) {
						saki.push_back(make_pair(i+1,j));
						masu[i+1][j]++;
					} else continue;
					ans++;
					moto.push_back(make_pair(i,j));
				}
			}
		} else {
			for(j=0;j<w;j++) {
				if (masu[i][j]&1) {
					if (j!=w-1) {
						saki.push_back(make_pair(i,j+1));
						masu[i][j+1]++;
					} else if (i!=h-1) {
						saki.push_back(make_pair(i+1,j));
						masu[i+1][j]++;
					} else continue;
					ans++;
					moto.push_back(make_pair(i,j));
				}
			}
		}
	}

	cout << ans << endl;
	for(i=0;i<ans;i++) {
		cout << moto[i].first+1 << " " << moto[i].second+1 << " ";
		cout << saki[i].first+1 << " " << saki[i].second+1 << endl;
	}
	return 0;
}

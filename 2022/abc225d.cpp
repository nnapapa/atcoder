#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	cin >> n >> q;
	vector<vector<ll>>	ans(q);
	a = 0;
	vector<ll> TN(n+1,0),TP(n+1,0),TH(n+1);
	for(i=1;i<=n;i++) TH[i] = i;
	for(z=0;z<q;z++) {
		cin >> c >> x;
		if (c==1) {
			cin >> y;
			TN[x] = y;
			TP[y] = x;
			TH[y] = TH[x];
		} else if (c==2) {
			cin >> y;
			TN[x] = 0;
			TP[y] = 0;
			TH[y] = y;
		} else {
			while(TP[x]) x = TP[x];
			ans[a].push_back(x);
			while(TN[x]) {
				ans[a].push_back(TN[x]);
				x = TN[x];
			}
			a++;
			//for(i=1;i<=n;i++) cout << TN[i] << " "; cout << endl;
			//for(i=1;i<=n;i++) cout << TP[i] << " "; cout << endl;
			//for(i=1;i<=n;i++) cout << TH[i] << " "; cout << endl;
		}
	}
	for(i=0;i<a;i++) {
		cout << ans[i].size() << " ";
		for(j=0;j<ans[i].size();j++) cout << ans[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		q,a,b,c,i,j,k,n,m,x,y;
	string	s;
	cin >> n >> m >> q;

	vector<vector<ll>>	nn(n+1 , vector<ll>(m+1));
	vector<ll>	mm(m+1,n);
	vector<ll>  ans;

	ll nnn,mmm,aa;
	for(i=0;i<q;i++) {
		cin >> a >> nnn;
		if (a==1) {
			aa = 0;
			for(j=1;j<=m;j++) {
				if (nn[nnn][j]) aa += mm[ nn[nnn][j] ];
			}
			ans.push_back(aa);
		} else {
			cin >> mmm;
			nn[nnn][mmm] = mmm;
			mm[mmm]--;
		}
	}
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y));
	for(i=0;i<ans.size();i++)
		cout << ans[i] << endl;
	return 0;
}

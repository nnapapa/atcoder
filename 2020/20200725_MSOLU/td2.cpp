//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL
ll	n;
ll	ans;
vector<ll>	aa(100);
vector<vector<ll>>	kb(100 , vector<ll>(1000000));
vector<ll>	maxk(100);

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,x,y;
	ans = 1000;
	cin >> n;
	for(i=1;i<=n;i++) cin >> aa[i];
	kb[0][0] = 1000;
	maxk[0] = 0;
	for(d=1;d<=n;d++) {
		for(k=0;k<1000000;k++) {
			
		}
		
	}
	for(i=0;i<=maxk[d];i++) {
		ans = max(ans , kb[n][i]);
	}
	cout << ans << endl;
	return 0;
}

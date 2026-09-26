#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> k;
	vector<ll>	h(n);
	for(i=0;i<n;i++) cin >> h[i];
	sort(h.begin(),h.end());
	for(i=0;i<n-k+1;i++) {
		ans = min(ans , h[i+k-1]-h[i]);
	}
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

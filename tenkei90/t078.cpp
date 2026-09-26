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
	cin >> n >> m;
	vector<vector<ll>>	A(n+1);
	for(i=0;i<m;i++) { cin >> a >> b; A[a].push_back(b); A[b].push_back(a); }
	for(i=1;i<=n;i++) {
		c = 0;
		for(j=0;j<A[i].size();j++) if (A[i][j]<i) c++;
		if (c==1) ans++;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		s,a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string		ans = "No";
	cin >> n >> s >> d;
	for(i=0;i<n;i++) {
		cin >> x >> y;
		if (x<s && y>d) ans = "Yes";
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

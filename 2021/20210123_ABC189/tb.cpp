#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,p;
	ll		ans = -1;
	string	s;
	cin >> n >> x;
	x = x * 100;
	lll a = 0;

	for(i=1;i<=n;i++) {
		cin >> v >> p;
		a += v * p;
		if (ans==-1 && a > x) ans = i;
	}
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

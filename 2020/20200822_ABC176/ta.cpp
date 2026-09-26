//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,t,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x >> t;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	ans = (n + x - 1)/x * t;
	cout << ans << endl;
	return 0;
}

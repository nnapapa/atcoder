//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	unsigned long long		a,c,h,i,j,k,l,m,n,x,y;
	unsigned long long		ans = 0;
	double	b;
	string	s;
	cin >> a >> b;
	ans = a * (ll)(b*1000.0);
	ans = ans / 1000;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	if (a==0 || b==0.0) ans = 0;
	cout << ans << endl;
	return 0;
}

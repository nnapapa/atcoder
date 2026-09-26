//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	a(n);
	for(i=0;i<n;i++) cin >> a[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	m = a[0];
	for(i=1;i<n;i++) {
		if (m<a[i]) m = a[i];
		else ans += m - a[i];
	}
	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s = "No";
	cin >> a >> b >> c >> k;
	bool	f = false;
	for(i=1;i<=k;i++) {
		if (a>=b) b *= 2;
		else if (b>=c) c *= 2;
		if ((a<b)&&(b<c)) {
			s = "Yes";
			break;
		}

	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,r,x,y;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	if ( (n & 1) == 1) {
		cout << "No" << endl;
		return 0;
	}
	bool f = true;
	for(i=0;i<n/2;i++) {
		if (s[i] != s[i+n/2]) f = false;
	}

	if (f) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	//if (ans<0) ans = 0;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	
	return 0;
}

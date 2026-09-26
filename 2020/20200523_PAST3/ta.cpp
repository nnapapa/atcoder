//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s,t;
	cin >> s;
	cin >> t;
	if (s == t) {
		cout << "same" << endl;
	} else {
		for(i=0;i<s.size();i++) if (s[i] >= 'a') s[i] -= 32;
		for(i=0;i<t.size();i++) if (t[i] >= 'a') t[i] -= 32;
		if (s == t) {
			cout << "case-insensitive" << endl;
		} else {
			cout << "different" << endl;
		}
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y));

	//cout << ans << endl;
	return 0;
}

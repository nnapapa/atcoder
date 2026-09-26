#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	n = s.size();
	char c[8] = {'c','h','o','k','u','d','a','i'};
	vector<vector<ll>>	dp2(9 , vector<ll>(n+1,0));
	for(i=0;i<=n;i++) dp2[0][i] = 1;
	for(i=1;i<=8;i++) {
		for(j=1;j<=n;j++) {
			if (s[j-1]==c[i-1]) {
				dp2[i][j] = dp2[i][j-1] + dp2[i-1][j];
				dp2[i][j] %= 1000000007;
			}
			else {
				dp2[i][j] = dp2[i][j-1];
			}
		}
	}
	/*
	for(i=0;i<=8;i++) {
		for(j=0;j<=n;j++) cout << dp2[i][j] << " ";
		cout << endl;
	}*/
	cout << dp2[8][n] << endl;
	return 0;
}

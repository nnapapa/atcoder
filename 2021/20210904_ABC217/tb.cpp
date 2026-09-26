#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	a = b = c = d = 1;
	for(i=0;i<3;i++) {
		cin >> s;
		if (s[1]=='B') a = 0;
		if (s[1]=='R') b = 0;
		if (s[1]=='G') c = 0;
		if (s[1]=='H') d = 0;
	}	
	if (a) s = "ABC";
	if (b) s = "ARC";
	if (c) s = "AGC";
	if (d) s = "AHC";

	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

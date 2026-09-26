#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	ans = "Yes";
	string	s;
	cin >> s;
	for(i=0;i<s.size();i++) {
		if ((i+1)%2) {
			if (s[i]>='A' && s[i]<='Z') ans = "No"; 
		} else {
			if (s[i]>='a' && s[i]<='z') ans = "No";
		}
	}
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

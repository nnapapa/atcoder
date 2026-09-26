#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s , t;
	cin >> n >> s >> t;
	for(i=n;i>0;i--) {
		//cout << i << endl;
		bool f = true;
		for(j=0;j<i;j++) {
			if (s[s.size()-i+j] != t[j]) { f = false; break; }
		}
		if (f) break;
	}
	ans = n*2 - i;
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

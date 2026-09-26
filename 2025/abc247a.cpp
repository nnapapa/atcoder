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
	char	s[6];
	cin >> s;
	for(i=4;i>=0;i--) {
		s[i+1] = s[i];
	}
	s[0] = '0';
	s[4] = '\0';

	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	//vector<vector<vector<ll>>>	dp3(x , vector<vector<ll>>(y, vector<ll>(z,INFL)));
	cout << s << endl;
	return 0;
}

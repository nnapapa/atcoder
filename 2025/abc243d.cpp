#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x;
	cin >> s;
	vector<bool> B;
	for(i=1;i<=x;i=i<<1) {
		if (i&x) B.push_back(true);
		else B.push_back(false);
	}
	reverse(B.begin(), B.end());
	for(i=0;i<n;i++) {
		if (s[i]=='U') {
			B.pop_back();
		} else if (s[i]=='R') B.push_back(true);
		else B.push_back(false);
	}
	for(i=0;i<B.size();i++) {
		ans = (ans<<1) + B[i];
	}
	cout << ans << endl;
	return 0;
}

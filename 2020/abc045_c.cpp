#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s,t;
	cin >> s;
	n = s.size() -1 ;
	for(b=0;b<(1LL<<n);b++) {
		a = 0;
		t = "";
		for(i=0;i<n;i++) {
			t += s[i];
			if (b&(1LL<<i)) {
				//cout << stol(t) << "+";
				a += stol(t);
				t = "";
			}
		}
		a += stol(t+s[n]);
		//cout << stol(t+s[n]) << "=" << a << endl ;
		ans += a;
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	W(n),P(n);
	vector<vector<ll>> wp(n , vector<ll>(2));
	for(i=0;i<n;i++) cin >> W[i] >> P[i];
	for(i=0,a=0;i<n;i++) a += W[i];
	for(i=0;i<n;i++) {
		wp[i][0] = W[i] + P[i];
		wp[i][1] = i;
	}
	sort(wp.begin(),wp.end());
	for(i=n-1,b=0;i>=0;i--) {
		if (a<=b) break;
		j = wp[i][1];
		a -= W[j];
		b += P[j];

	}
	cout << i+1 << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) testcase();
	return 0;
}

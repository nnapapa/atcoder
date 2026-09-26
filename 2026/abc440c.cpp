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
	cin >> n >> w;
	vector<ll>	C(n);
	for(i=0;i<n;i++) cin >> C[i];
	if (w<n) {
		for(i=0,c=0;i<n;i++) {
			if (i%(2*w)<w) c += C[i];
		}
		ans = c;
		for(x=1;x<2*w;x++) {
			//cout << "c= " << c << endl;
			for(i=(x-1)%(2*w);i<n;i+=2*w) c -= C[i];
			for(i=(x+w-1)%(2*w);i<n;i+=2*w) c += C[i];
			ans = min(ans,c);
		}
	}
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) testcase();
	return 0;
}

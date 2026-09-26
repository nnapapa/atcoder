#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,z,q;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> b;
		auto x = lower_bound(A.begin(),A.end(),b);
		if (x == A.begin()) {
			ans = abs(*x-b);
		} else {
			auto y = lower_bound(A.begin(),A.end(),b)-1;
			ans = min(abs(*x-b) , abs(*y-b));
		}
		cout << ans << endl;
	}

	
	return 0;
}

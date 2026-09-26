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
	string	s;
	cin >> n;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	bool f = true;
	x = 0; y = n-1;
	for(i=0;i<n;i++) {
		if (f) {
			if (A[x]>=A[y]) ans += A[x++];
			else ans += A[y--];
		} else {
			if (A[x]>=A[y]) ans -= A[x++];
			else ans -= A[y--];
		}
		f = !f;
	}
	cout << ans << endl;
	return 0;
}

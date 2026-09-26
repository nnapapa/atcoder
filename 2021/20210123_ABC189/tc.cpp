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
	for(i=0;i<n;i++) {
		m = A[i];
		for(j=i;j<n;j++) {
			m = min(m,A[j]);
			ans = max(ans , m*(j-i+1));
		}
	}

	cout << ans << endl;
	return 0;
}

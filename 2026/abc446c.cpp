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
	cin >> n >> d;
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0,j=0;i<n;i++) {
		while(B[i]) {
			if (A[j]<=B[i]) {
				B[i] -= A[j];
				A[j++] = 0;
			} else {
				A[j] -= B[i];
				B[i] = 0;
			}
		}
		if (i-d>=0) {
			A[i-d] = 0;
			if (i-d==j) j++;
		}

	}
	for(i=0;i<n;i++) ans += A[i];
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) testcase();
	return 0;
}

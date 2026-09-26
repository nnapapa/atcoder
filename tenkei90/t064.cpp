#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,q,h,i,j,k,l,r,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> q;
	vector<ll>	ANS;
	vector<ll>	A(n+1),B(n+2,0);
	for(i=1;i<=n;i++) cin >> A[i];
	for(i=1;i<n;i++) {
		B[i] = A[i+1] - A[i];
		ans += abs(A[i+1] - A[i]);
	}

	for(i=0;i<q;i++) {
		cin >> l >> r >> v;
		if (l>1) {
			ans -= abs(B[l-1]);
			B[l-1] += v;
			ans += abs(B[l-1]);
		}
		if (r<n) {
			ans -= abs(B[r]);
			B[r] -= v;
			ans += abs(B[r]);
		}
		ANS.push_back(ans);
	}

	for(i=0;i<q;i++) cout << ANS[i] << endl;
	return 0;
}

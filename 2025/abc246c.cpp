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
	string	s;
	cin >> n >> k >> x;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	for(i=0;i<n;i++) {
		if (k==0) break;
		a = A[i]/x;
		c = min(k,a);
		A[i] -= x*c;
		k -= c;
		if (k==0) break;
	}
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	if (k>0) {
		for(i=0;i<n;i++) {
			if (A[i]>0) {
				k--;
				A[i] = 0;
			}
			if (k==0) break; 
		}
	}
	for(i=0;i<n;i++) ans += A[i];
	cout << ans << endl;
	return 0;
}

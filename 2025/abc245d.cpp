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
	cin >> n >> m;
	vector<ll>	A(n+1),B(m+1,INFL),C(n+m+1);
	for(i=0;i<=n;i++) cin >> A[i];
	for(i=0;i<=n+m;i++) cin >> C[i];
	for(i=m;i>=0;i--) {
		B[i] = C[i+n]/A[n];
		for(j=n;j>=0;j--) {
			C[i+j] -= A[j]*B[i];
		}
	}

	for(i=0;i<m;i++) cout << B[i] << " ";
	cout << B[m] << endl;
	return 0;
}

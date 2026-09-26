#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n),C(n);
	for(i=0;i<n;i++) cin >> A[i];
	B[0] = A[0];
	C[0] = 1;
	cout << ans << endl;
	for (i=1;i<n;i++) {
		if (A[i]==B[ans-1]) {
			if (C[ans-1]+1 == A[i]) {
				ans -= C[ans-1];
			} else {
				C[ans] = C[ans-1] + 1;
				B[ans++] = A[i];

			}
		} else {
			C[ans] = 1;
			B[ans++] = A[i];
		}
		//for(j=0;j<ans;j++) cout << B[j] << " ";
		//cout << endl;
		//for(j=0;j<ans;j++) cout << C[j] << " ";
		//cout << endl;
		cout << ans << endl;
	}
	
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll>	A(n),B(n),C(6);
	for(i=0;i<n;i++) cin >> A[i];
	B = A;
	sort(B.begin(), B.end());
	//for(i=0;i<n;i++) cout << " " << B[i];
	//cout << endl;
	while(q--){
		cin >> k;
		for(i=0;i<6;i++) C[i] = B[i];
		//for(i=0;i<n;i++) cout << " " << C[i];
		//cout << endl;
		for(j=0;j<k;j++) {
			cin >> b;
			for(i=0;i<6;i++) if (C[i]==A[b-1]) { C[i] = 0; break; }
		}
		for(i=0;i<6;i++) if (C[i]) break;
		cout << C[i] << endl;
		//for(i=0;i<n;i++) cout << " " << C[i];
		//cout << endl;
	}
	return 0;
}

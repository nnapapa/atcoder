#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,g,c,t,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	vector<ll>	A(n+1,0),G(n+1,0),C(n+1,0),T(n+1,0);

	for(i=1;i<=n;i++) {
		A[i] = A[i-1];
		G[i] = G[i-1];
		C[i] = C[i-1];
		T[i] = T[i-1];
		if (s[i-1]=='A') A[i]++;
		if (s[i-1]=='G') G[i]++;
		if (s[i-1]=='C') C[i]++;
		if (s[i-1]=='T') T[i]++;
	}

	for(i=1;i<=n;i++) {
		for(j=i+1;j<=n;j+=2) {
			a = A[j]-A[i-1];
			g = G[j]-G[i-1];
			c = C[j]-C[i-1];
			t = T[j]-T[i-1];
			if (a==t && c==g) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

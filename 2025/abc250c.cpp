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
	cin >> n >> q;
	vector<ll>	A(n+1),B(n+1);
	for(i=1;i<=n;i++) A[i] = B[i] = i;
	for(i=1;i<=q;i++) {
		cin >> x;
		if (B[x] != n) {
			z = A[B[x]+1];
			swap(A[B[x]],A[B[x]+1]);
			swap(B[x],B[z]);
		} else {
			z = A[B[x]-1];
			swap(A[B[x]],A[B[x]-1]);
			swap(B[x],B[z]);
		}
	}
	cout << A[1];
	for(i=2;i<=n;i++) {
		cout << " " << A[i];
	}
	cout << endl;
	
	return 0;
}

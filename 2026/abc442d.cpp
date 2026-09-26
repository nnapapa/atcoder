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
	vector<ll>	A(n),T(n);
	for(i=0;i<n;i++) cin >> A[i];
	T[0] = A[0];
	for(i=1;i<n;i++) T[i] = T[i-1] + A[i];
	while(q--) {
		cin >> c;
		if (c==1) {
			cin >> x;
			T[x-1] += A[x] - A[x-1];
			swap(A[x-1],A[x]);
		} else {
			cin >> l >> r;
			cout << T[r-1] - T[l-1] + A[l-1] << endl;
		}
	} 
	return 0;
}

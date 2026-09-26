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
	cin >> n;
	vector<ll>	A(n+1),B(n+1);
	for(i=1;i<=n;i++) cin >> A[i];
	for(i=1;i<=n;i++) B[A[i]] = i;

	for(i=1;i<=n;i++) {
		if (i>1) cout << " ";
		cout << B[i];
	}
	cout << endl;
	return 0;
}

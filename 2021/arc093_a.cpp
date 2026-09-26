#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s;
	cin >> n;
	vector<ll>	A(n+2,0),ans(n+2,0);
	for(i=1;i<=n;i++) cin >> A[i];

	a = 0;
	for(i=1;i<=n+1;i++) {
		a += abs(A[i-1]-A[i]);
	}

	for(i=1;i<=n;i++) {
		ans[i] = a + abs(A[i-1]-A[i+1]) - abs(A[i-1]-A[i]) - abs(A[i]-A[i+1]);
	}
	for(i=1;i<=n;i++) cout << ans[i] << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,ab;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n+1),AC(n+1,0);
	for(i=1;i<n+1;i++) cin >> A[i];
	a = b = ab = 0;
	for(i=2;i<=n;i++) {
		a += A[i]*A[i]*(i-1);
	}
	for(i=1;i<n;i++) {
		b += A[i]*A[i]*(n-i);
	}
	for(i=1;i<=n;i++) {
		AC[i] = AC[i-1] + A[i];
	}
	for(i=2;i<=n;i++) {
		ab += -2 * A[i] * AC[i-1];
	}

	cout << a + ab + b << endl;
	return 0;
}

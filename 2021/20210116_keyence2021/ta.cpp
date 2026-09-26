#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n),Amax(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	
	ans = A[0]*B[0];
	cout << ans << endl;
	
	Amax[0] = A[0];
	for(i=1;i<n;i++) Amax[i] = max(Amax[i-1] , A[i]);

	for(i=1;i<n;i++) {
		ans = max(ans , Amax[i]*B[i]);
		cout << ans << endl;
	}

	return 0;
}

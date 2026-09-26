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

	vector<ll>	C(n) , A(n,0);
	for(i=0;i<n;i++) cin >> C[i];
	sort(C.begin() , C.end());
	A[0] = C[0];
	for(i=1;i<n;i++) {
		if(C[i-1]==C[i]) A[i] = A[i-1]-1;
		else A[i] = A[i-1]-1 + (C[i]-C[i-1]);
	}
	ans = A[0];
	for(i=1;i<n;i++) {
		ans = ans * A[i] % 1000000007;
	}
	//for(i=0;i<n;i++) {
	//	cout << C[i] << " " << A[i] << endl;
	//}
	cout << ans << endl;
	return 0;
}

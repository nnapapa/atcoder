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
	vector<ll>	A(3);
	cin >> A[0] >> A[1] >> A[2];
	sort(A.begin(),A.end());

	if (A[2]-A[1]==A[1]-A[0]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

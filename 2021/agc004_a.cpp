#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	vector<ll>	A(3);
	cin >> A[0] >> A[1] >> A[2];
	sort(A.begin(),A.end());
	ans = A[0]*A[1]*((A[2]+1)/2) - A[0]*A[1]*(A[2]/2);

	cout << ans << endl;
	return 0;
}

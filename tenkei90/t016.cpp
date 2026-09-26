#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	vector<ll>	A(3);
	cin >> A[0] >> A[1] >> A[2];
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	for(i=0;i<=9999;i++) {
		if (n<i*A[0]) break;
		for(j=0;j<=9999-i;j++) {
			if (n<i*A[0]+j*A[1]) break;
			if ((n-i*A[0]-j*A[1])%A[2]==0) ans = min(ans , i+j+(n-i*A[0]-j*A[1])/A[2]);
		}
	}

	cout << ans << endl;
	return 0;
}

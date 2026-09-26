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
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i] >> B[i];
	for(i=n-1;i>=0;i--) {
		a = A[i]+ans;
		if (a % B[i])	c = B[i] - (a % B[i]);
		else c = 0;
		ans += c;
		//cout << c << ' ' << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

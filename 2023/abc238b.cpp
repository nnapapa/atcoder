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
	vector<ll>	A(361,0);
	A[0] = A[360] = 1;
	x = 0;
	for(i=0;i<n;i++) {
		cin >> a;
		x = (x + a) % 360;
		A[x] = 1;
	}
	for(i=1,x=0;i<=360;i++) {
		if (A[i]) {
			ans = max(ans , i-x);
			x = i;
		}
	}
	cout << ans << endl;
	return 0;
}

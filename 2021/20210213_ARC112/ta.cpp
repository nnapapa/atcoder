#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,r;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	L(n),R(n),A(n);
	for(i=0;i<n;i++) cin >> L[i] >> R[i];
	for(i=0;i<n;i++) {
		l = L[i];
		r = R[i];
		ll mx = r - l;
		ll mn = l;
		if (mx<mn) {
			A[i] = 0;
		} else {
			a = mx - mn + 1;
			A[i] = a * (a+1) / 2;
		}
	}
	for(i=0;i<n;i++) cout << A[i] << endl;
	return 0;
}

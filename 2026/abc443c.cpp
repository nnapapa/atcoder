#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> t;
	vector<ll>	A(n+1);
	for(i=0;i<n;i++) cin >> A[i];
	A[n] = t;
	for(i=a=0;i<=n;i++) {
		if (a<A[i]) {
			ans += A[i] - a;
			a = A[i] + 100;
		}
	}
	cout << ans << endl;
	return 0;
}

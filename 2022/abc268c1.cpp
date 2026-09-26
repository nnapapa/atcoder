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
	vector<ll>	A(n),B(n,0),P(n);
	for(i=0;i<n;i++) cin >> P[i];
	for(i=0;i<n;i++) A[i] = (P[i]-i+n)%n;
	for(i=0;i<n;i++) {
		B[(A[i]-1+n)%n]++;
		B[A[i]%n]++;
		B[(A[i]+1)%n]++;
	}
	ans = 0;
	for(i=0;i<n;i++) ans = max(ans,B[i]);

	cout << ans << endl;
	return 0;
}

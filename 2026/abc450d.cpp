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
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) A[i] %= k;
	sort(A.begin(),A.end());
	ans = A[n-1] - A[0];
	for(i=0;i<n-1;i++) {
		ans = min(ans, A[i]+k - A[i+1]);
	}
	cout << ans << endl;
	return 0;
}

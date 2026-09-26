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
	cin >> n >> k >> x;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	for(i=n-k,a=0;i<n;i++) {
		a += A[i];
		if (a>=x) break;
	}
	if (a<x) ans = -1;
	else ans = i + 1;
	cout << ans << endl;
	return 0;
}

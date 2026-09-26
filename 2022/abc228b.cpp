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
	cin >> n >> x;
	vector<ll>	A(n+1),B(n+1,0);
	for(i=1;i<=n;i++) cin >> A[i];
	while(B[x]==0) {
		B[x] = 1;
		ans++;
		x = A[x];
	}
	cout << ans << endl;
	return 0;
}

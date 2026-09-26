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

	vector<ll>	A(n+1),B(n+1),C(n+1),D(n+1),AC(n+1,0),DC(n+1,0);
	for(i=1;i<=n;i++) cin >> A[i];
	for(i=1;i<=n;i++) cin >> B[i];
	for(i=1;i<=n;i++) cin >> C[i];
	for(i=1;i<=n;i++) D[i] = B[C[i]];
	for(i=1;i<=n;i++) AC[A[i]]++;
	for(i=1;i<=n;i++) DC[D[i]]++;
	for(i=1;i<=n;i++) ans += AC[i]*DC[i];

	cout << ans << endl;
	return 0;
}

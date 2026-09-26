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
	cin >> n >> m;
	vector<ll>	A(n),B(m),Bx(m,0);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<m;i++) cin >> B[i];
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	reverse(A.begin(),A.end());
	reverse(B.begin(),B.end());
	Bx[0] = max(0ll,B[0]);
	for(i=1;i<m;i++) {
		Bx[i] = max(Bx[i-1],Bx[i-1]+B[i]);
	}
	for(i=0,a=0;i<n;i++) {
		a += A[i];
		j = min(i,m-1);
		ans = max(ans,a+Bx[j]);
	}
	cout << ans << endl;
	return 0;
}

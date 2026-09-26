#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0;i<n;i++) if (A[i]==B[i]) ans++;
	cout << ans << endl;
	ans = 0;
	for(i=0;i<n;i++) for(j=0;j<n;j++) {
		if (i==j) continue;
		if (A[i]==B[j]) {
			ans++;
			continue;
		}
	}
	cout << ans << endl;
	return 0;
}

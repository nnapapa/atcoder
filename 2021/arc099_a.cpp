#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	/*x = 0;
	for(i=0;i<n;i++) {
		if (A[i]<A[x]) x = i;
	}
	k--;
	for(i=0;i<n;i++) if (A[x]==A[i]) {
		a = 0;
		if (i>0) a = (i + k - 1) / k;
		if (i!=n-1) a +=(n-i-1 + k - 1) / k;
		ans = min(ans , a);
	}
	*/
	k--;
	ans = (n + k - 2) / k;
	cout << ans << endl;
	return 0;
}

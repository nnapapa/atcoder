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
	cin >> n;
	vector<ll>	A(n),orr(n+1,0);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<(1<<n-1);i++) {
		for(j=0;j<=n;j++) orr[j] = 0;
		x = 0;
		for(j=0;j<n;j++) {
			orr[x] = orr[x] | A[j];
			if (i&(1<<j)) x++;
		}
		a = 0;
		for(j=0;j<=x;j++) {
			a = a ^ orr[j];
		}
		ans = min(ans , a);
	}

	cout << ans << endl;
	return 0;
}

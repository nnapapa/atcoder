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
	cin >> n >> r;
	vector<ll>	L(n);
	for(i=0;i<n;i++) cin >> L[i];
	for(i=0;i<n;i++) if (L[i]==0 || i==r) break;
	for(j=0;j<n;j++) if (L[n-1-j]==0 || n-1-j==r-1) break;
	for(k=i;k<=n-1-j;k++) {
		if (L[k]) ans++;
		ans++;
	}
	cout << ans << endl;
	return 0;
}

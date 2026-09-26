#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,u,v,w,x,y,z;
	string	s,t,ans;
	cin >> n >> m >> s >> t;
	vector<ll>	A(n+1,0);
	for(i=0;i<m;i++) {
		cin >> l >> r;
		A[--l]++;
		A[r]--;
	}
	for(i=0,a=0;i<n;i++) {
		a += A[i];
		if (a&1) ans += t[i];
		else ans += s[i];
	}
	cout << ans << endl;
	return 0;
}

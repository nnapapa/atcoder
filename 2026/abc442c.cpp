#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll nCr(ll n, ll r) {
    if (r == 0) return 1;
    return (n - r + 1) * nCr(n, r - 1) / r;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	cin >> n >> m;
	vector<ll>	A(n+1,1);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		A[a]++;
		A[b]++;
	}
	for(i=1;i<=n;i++) {
		cout << nCr(n-A[i],3) << endl;
	}
	return 0;
}

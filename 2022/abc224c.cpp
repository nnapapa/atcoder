#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

//nCr 組み合わせ計算(nPr/r!)
ll nCr(ll n, ll r) {
    if (r == 0) return 1;
    return (n - r + 1) * nCr(n, r - 1) / r;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	ans = nCr(n,3);
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	for(i=0;i<n-2;i++) for(j=i+1;j<n-1;j++) for(k=j+1;k<n;k++) {
		a = X[i]-X[j];
	  b = X[j]-X[k];
		c = Y[i]-Y[j];
		d = Y[j]-Y[k];

		if ((a*d==b*c)&&(1)) ans--;
	}
	
	cout << ans << endl;
	return 0;
}

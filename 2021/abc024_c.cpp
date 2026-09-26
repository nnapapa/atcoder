#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,r,m,n,v,w,x,y,z;
	cin >> n >> d >> k;
	vector<ll>	L(d),R(d),S(k),T(k),ans(k);
	for(i=0;i<d;i++) cin >> L[i] >> R[i];
	for(i=0;i<k;i++) cin >> S[i] >> T[i];

	for(i=0;i<k;i++) {
		c = S[i];
		for(j=0;j<d;j++) {
			if (L[j]<=c && c<=R[j]) {
				if (L[j]<=T[i] && T[i]<=R[j]) {
					ans[i] = j+1;
					break;
				}
				if (c<T[i]) c = R[j];
				else c = L[j];
			}
		} 
	}

	for(i=0;i<k;i++) cout << ans[i] << endl;
	return 0;
}

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
	cin >> n;

	vector<ll>	S(n),T(n),U(n,0);
	for(i=0;i<n;i++) cin >> S[i];
	for(i=0;i<n;i++) cin >> T[i];
	for(i=0;i<n;i++) {
		if (U[i]) continue;
		U[i] = 1;
		j = i;
		while(1) {
			k = (j+1)%n;
			if (T[j]+S[j]>=T[k]) break;
			T[k] = T[j]+S[j];
			U[k] = 1;
			j = k;
		}
	}
	for(i=0;i<n;i++) cout << T[i] << endl;
	return 0;
}

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
	string	s;
	cin >> n;

	vector<double> L(n),R(n);
	for(i=0;i<n;i++) {
		cin >> a >> L[i] >> R[i];
		if (a==2) R[i] -= 0.5;
		if (a==3) L[i] += 0.5;
		if (a==4) {
			L[i] += 0.5;
			R[i] -= 0.5;
		}
	}
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if (!(R[i]<L[j] || R[j] < L[i])) ans++;
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

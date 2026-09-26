#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<ll>	aa(n),sum(n+1,0);
	for(i=0;i<n;i++) cin >> aa[i];
	for(i=0;i<n;i++) sum[i+1] = sum[i] + aa[i];
	for(i=0;i<n-k+1;i++) {
		ans += sum[i+k] - sum[i];
	}
	cout << ans << endl;
	return 0;
}

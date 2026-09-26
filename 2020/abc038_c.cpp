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
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];
	ans = 1;
	a = 1;
	for(i=1;i<n;i++) {
		if (aa[i-1]<aa[i]) a++;
		else a = 1;
		ans += a;
	}

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,y,z;
	ll		ans = 0;
	double ad = 0;
	string	s;
	cin >> n;
	vector<ll>	x(n);
	for(i=0;i<n;i++) cin >> x[i];

	for(i=0;i<n;i++) {
		ans += abs(x[i]);
	}
	cout << ans << endl;

	ans = 0;
	for(i=0;i<n;i++) {
			ans += x[i]*x[i];
	}
	ad = sqrt(ans);
	printf("%.9f\n",ad);

	ans = -1;
	for(i=0;i<n;i++) {
		ans = max(abs(x[i]),ans);
	}
	cout << ans << endl;
	return 0;
}

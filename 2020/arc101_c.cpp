#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> k;

	vector<ll>	x(n+1),sum(n+1,0),sk(n+1);
	c = 0;
	for(i=1;i<=n;i++) cin >> x[i];
	if (x[1]<0) {
		c = -x[1];
		for(i=1;i<=n;i++) x[i] += c;
	}

	for(i=1;i<=n-k+1;i++) sk[i] = x[i+k-1]-x[i];
	//for(i=1;i<=n;i++) cout << sk[i] << ' ';cout << endl;
	for(i=1;i<=n-k+1;i++) sk[i] += min(abs(x[i]-c),abs(x[i+k-1]-c));
	//for(i=1;i<=n;i++) cout << sk[i] << ' ';cout << endl;
	for(i=1;i<=n-k+1;i++) ans = min(ans , sk[i]);
	cout << ans << endl;
	return 0;
}

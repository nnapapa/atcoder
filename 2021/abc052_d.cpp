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
	cin >> n >> a >> b;
	vector<ll>	X(n);
	for(i=0;i<n;i++) cin >> X[i];
	for(i=1;i<n;i++) {
		ans += min((X[i]-X[i-1])*a , b);
	}
	cout << ans << endl;
	return 0;
}

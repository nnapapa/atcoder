#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,p,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> a >> p >> x;
		if (a<x) ans = min(ans,p);
	}
	if (ans==INFL) ans = -1;
	cout << ans << endl;
	return 0;
}

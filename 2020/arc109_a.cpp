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
	cin >> a >> b >> x >> y;
	if (a==b) ans = x;
	else if (a>b) {
		ans = x;
		ans += min(2*x,y)*(a-b-1);
	} else {	//a<b
		ans = x;
		ans += min(2*x,y)*(b-a);
	}

	cout << ans << endl;
	return 0;
}

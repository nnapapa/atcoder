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
	cin >> h >> w;
	ans = ((h+1)/2) * ((w+1)/2);
	if (h==1||w==1) ans = h*w;

	cout << ans << endl;
	return 0;
}

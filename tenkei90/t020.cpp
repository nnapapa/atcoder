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
	cin >> a >> b >> c;
	d = 1;
	for(i=0;i<b;i++) d = d*c;

	if (a < d) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

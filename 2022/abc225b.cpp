#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Yes";
	cin >> n;
	cin >> a >> b;
	cin >> c >> d;
	z = -1;

	if ((a==c)||(a==d)) z = a;
	if ((b==c)||(b==d)) z = b;
	if (z==-1) s = "No";
	
	for(i=3;i<n;i++) {
		cin >> x >> y;
		if (x!=z && y!=z) s = "No";
	}
	cout << s << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	a,b;
	cin >> k >> a >> b;
	x = y = 0;
	for(i=0;i<a.size();i++) {
		x = x*k + (a[i]-'0');
	}
	for(i=0;i<b.size();i++) {
		y = y*k + (b[i]-'0');
	}
	
	cout << x*y << endl;
	return 0;
}

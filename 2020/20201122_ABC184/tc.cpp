#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,r,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> r >> c;
	cin >> x >> y;

	if (r==x && c==y) {
		cout << 0 << endl;
		return 0;
	}
	if ( (r+c==x+y) || (r-c==x-y) || (abs(r-x)+abs(c-y)<=3) ) {
		cout << 1 << endl;
		return 0;
	}
	for(i=r-2;i<=r+2;i++) for(j=c-2;j<=c+2;j++) {
		if ( (i+j==x+y) || (i-j==x-y) || (abs(i-x)+abs(j-y)<=3) ) {
			cout << 2 << endl;
			return 0;
		}
	}
	i=r-3;j=c;
	if ( (i+j==x+y) || (i-j==x-y) || (abs(i-x)+abs(j-y)<=3) ) {
		cout << 2 << endl;
		return 0;
	}
	i=r+3;j=c;
	if ( (i+j==x+y) || (i-j==x-y) || (abs(i-x)+abs(j-y)<=3) ) {
		cout << 2 << endl;
		return 0;
	}
	i=r;j=c-3;
	if ( (i+j==x+y) || (i-j==x-y) || (abs(i-x)+abs(j-y)<=3) ) {
		cout << 2 << endl;
		return 0;
	}
	i=r;j=c-3;
	if ( (i+j==x+y) || (i-j==x-y) || (abs(i-x)+abs(j-y)<=3) ) {
		cout << 2 << endl;
		return 0;
	}
	if (((r-c)&1)==((x-y)&1)) {
		cout << 2 << endl;
		return 0;
	}
	cout << 3 << endl;
	return 0;
}

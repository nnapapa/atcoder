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
	cin >> h >> w >> a >> b;
	if (a==0&&b==0) {
		for(i=0;i<h;i++) {
			for(j=0;j<w;j++) cout << '0';
			cout << endl;
		}
	} else if (a==0) {
		if (w==1) {
			for(i=0;i<h;i++) {
				if ((b--)<=0) cout << '0' << endl;
				else cout << '1' << endl;
			}
		} else cout << "No" << endl;
	} else if (b==0) {
		if (h==1) {
			for(j=0;j<w;j++) {
				if ((a--)<=0) cout << '0';
				else cout << '1';
			}
			cout << endl;
		} else cout << "No" << endl;
	} else {
		if (w%a==0&&h%b==0&&w/a==h/b) {
			x = y = c = d = 0;
			for(i=0;i<h;i++) {
				for(j=0;j<w;j++) {
					if (y<=i&&i<y+b&&x<=j&&j<x+a) cout << '1';
					else cout << '0';
				}
				cout << endl;
				if ((++c) == b) { x += a; y += b; c = 0; }
				//if ((++d) == b) { y += b; d = 0; }
			}
		} else cout << "No" << endl;
	}

	return 0;
}

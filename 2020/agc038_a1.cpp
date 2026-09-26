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
	for(ll hi=0;hi<h;hi++) {
		for(ll wi=0;wi<w;wi++) {
			if ((hi<h-b && wi<w-a) || (hi>=h-b && wi>=w-a)) {
				cout << '0';
			} else {
				cout << '1';
			}
		}
		cout << endl;
	}

	return 0;
}

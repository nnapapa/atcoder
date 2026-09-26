#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	ll D[4][2] = { {0,1}, {-1,0}, {0,-1}, {1,0} };
	a = 0;
	y = x = 0;
	for(auto c : s) {
		if (c=='S') {
			y += D[a][0];
			x += D[a][1];
		}
		if (c=='R') {
			a = (a+1)%4;
		}
	}
	
	cout << x << " " << y << endl;
	return 0;
}

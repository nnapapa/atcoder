#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> a >> b;
	for(x=-100;x<=100;x++) for(y=-100;y<=100;y++) {
		if (x+y == a && x-y == b) {
			c = x;
			d = y;
		}
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << c << ' ' << d << endl;
	return 0;
}

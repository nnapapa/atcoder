#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,z;
	ll		ans = 0;
	string	s;
	n=3;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	map<ll,ll> XX,YY;
	for(i=0;i<n;i++) {
		XX[X[i]]++;
		YY[Y[i]]++;
	}
	for(auto x : XX) {
		if (x.second==1) cout << x.first;
	}
	for(auto y : YY) {
		if (y.second==1) cout << " " << y.first << endl;
	}

	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		q,r,a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<vector<ll>>	P(2 , vector<ll>(n+1,0));
	for(i=1;i<=n;i++) {
		cin >> c >> a;
		P[c-1][i] = P[c-1][i-1] + a;
		P[2-c][i] = P[2-c][i-1];
	}
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> l >> r;
		a = P[0][r] - P[0][l-1];
		b = P[1][r] - P[1][l-1];
		cout << a << " " << b << endl;
	}

	return 0;
}

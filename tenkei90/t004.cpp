#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s;
	cin >> h >> w;
	vector<vector<ll>>	A(h , vector<ll>(w));
	vector<vector<ll>>	ans(h , vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> A[i][j];
	vector<ll> H(w),W(h);
	for(i=0;i<h;i++) {
		a = 0;
		for(j=0;j<w;j++) {
			a += A[i][j];
		}
		W[i] = a;
	}
	for(i=0;i<w;i++) {
		a = 0;
		for(j=0;j<h;j++) {
			a += A[j][i];
		}
		H[i] = a;
	}
	for(i=0;i<h;i++) for(j=0;j<w;j++) ans[i][j] = W[i]+H[j]-A[i][j];
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) cout << ans[i][j] << " ";
		cout << endl;
	}
	return 0;
}

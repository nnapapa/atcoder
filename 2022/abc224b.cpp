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
	cin >> h >> w;
	vector<vector<ll>>	A(h , vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> A[i][j];
	ll i1,i2,j1,j2;
	for(i1=0;i1<h;i1++) for(i2=i1+1;i2<h;i2++) for(j1=0;j1<w;j1++) for(j2=j1+1;j2<w;j2++) {
		if (A[i1][j1]+A[i2][j2] > A[i2][j1]+A[i1][j2]) s = "No";
	}
	cout << s << endl;
	return 0;
}

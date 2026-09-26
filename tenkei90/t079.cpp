#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	vector<vector<ll>>	A(h, vector<ll>(w)) , B(h, vector<ll>(w));

	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> A[i][j];
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> B[i][j];

	for(i=0;i<h-1;i++) for(j=0;j<w-1;j++) {
		a = A[i][j];
		b = B[i][j];
		c = a - b;
		if (c) {
			A[i][j] -= c;
			A[i+1][j] -= c;
			A[i][j+1] -= c;
			A[i+1][j+1] -= c;
			ans += abs(c);
		}
	}
	s = "Yes";
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		if (A[i][j]!=B[i][j]) s = "No";
	}
	cout << s << endl;
	if (s == "Yes") {
		cout << ans << endl;
	}
	return 0;
}

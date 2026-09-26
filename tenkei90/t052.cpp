#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> n;
	vector<vector<ll>>	A(n,vector<ll>(6));
	for(i=0;i<n;i++) for(j=0;j<6;j++) cin >> A[i][j];
	for(i=0;i<n;i++) {
		a = 0;
		for(j=0;j<6;j++) a += A[i][j];
		ans *= a;
		ans %= 1000000007;
	}

	cout << ans << endl;
	return 0;
}

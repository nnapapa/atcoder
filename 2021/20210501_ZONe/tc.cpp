#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll>	M(4),P(5);
ll ans,p;
ll calc(ll a) {

}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s;
	cin >> n;

	vector<vector<ll>>	A(n,vector<ll>(5));
	for(i=0;i<n;i++) cin >> A[i][0] >> A[i][1] >> A[i][2] >> A[i][3] >> A[i][4];
	M[0] = 0;
	M[1] = 1;
	M[2] = 2;
	for(i=0;i<5;i++) P[i] = max(A[0][i] , max(A[1][i],A[2][i]);
	for(i=0,ans=INFL;i<5;i++) {
		if (ans>P[i]) {
			ans = P[i];
			p = i;
		}
	}
	for(i=3;i<n;i++) {
		ans = calc(i);
	}
	cout << ans << endl;
	return 0;
}

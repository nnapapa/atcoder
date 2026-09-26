#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll n;
vector<ll>	A(3001);
vector<vector<ll>> B(3001,vector<ll>(3001,0));

ll calc(ll bi , ll ai) {
	
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	for(i=1;i<=n;i++) cin >> A[i];
	for(i=1;i<n;i++) {
		for(j=i+1;j<=n;j++) {
			B[i][j] += B[i-1][j] + A[j];
		}
	}
	
 	cout << ans << endl;
	return 0;
}

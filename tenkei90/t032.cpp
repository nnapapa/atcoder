#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n;
vector<vector<ll>>	A(10 , vector<ll>(10)),X(10 , vector<ll>(10));
ll calc(ll map , ll s , ll ku) {
	if (ku>n) return 0;
	ll m = INFL;
	for(ll i=0;i<n;i++) {
		if (map&(1<<i)) continue;
		if (X[i][s]&&ku>1) continue;
		m = min(m , A[i][ku-1] + calc(map|(1<<i) , i , ku+1));
	}
	return m;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;
	ll		ans;
	cin >> n;
	for(i=0;i<n;i++) for(j=0;j<n;j++) cin >> A[i][j];
	cin >> m;
	for(i=0;i<m;i++) {
		cin >> x >> y;
		X[x-1][y-1] = X[y-1][x-1] = 1;
	}
	ans = calc(0,0,1);
	if (ans == INFL) ans = -1;
	cout << ans << endl;
	return 0;
}

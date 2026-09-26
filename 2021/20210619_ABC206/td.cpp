#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	dsu d(200001);
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n/2;i++) {
		if (A[i]!=A[n-1-i]) {
			d.merge(A[i],A[n-1-i]);
		}
	}
	vector<vector<int>> num = d.groups();
	for(i=0;i<num.size();i++) {
		a = num[i].size();
		if (a>1) ans += a-1;
	}
	cout << ans << endl;
	return 0;
}

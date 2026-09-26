#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<pair<ll,ll>> A(n);
	for(i=0;i<n;i++) cin >> A[i].first >> A[i].second;
	sort(A.begin() , A.end());
	c = 0;
	x = k;
	for(i=0;i<n;i++) {
		a = A[i].first;
		b = A[i].second;
		if (c+x < a) break;
		x = x-(a-c) + b;
		c = a;
	}
	ans = c + x;
	cout << ans << endl;
	return 0;
}

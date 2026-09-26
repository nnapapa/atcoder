#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll>	A(n+1,1);
	a = 1;
	for(i=0;i<q;i++) {
		cin >> x >> y;
		ans = 0;
		for(; a<=x; a++) {
			A[y] += A[a];
			ans += A[a];
		}
		cout << ans << endl;
	}
	return 0;
}

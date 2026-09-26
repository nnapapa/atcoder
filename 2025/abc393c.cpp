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
	string	s;
	cin >> n >> m;
	map<pair<ll,ll>,ll>	A;
	for(i=0;i<m;i++) {
		cin >> x >> y;
		if (x>y) swap(x,y);
		if (x==y) {
			ans++;
			continue;
		}
		if (A.count(make_pair(x,y))==0) {
			A[make_pair(x,y)] = 1;
		} else ans++;
	}
	cout << ans << endl;
	return 0;
}

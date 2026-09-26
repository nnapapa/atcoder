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
	cin >> n >> m;
	unordered_set<ll> A;
	vector<ll> B = { 0, 0x100000000ll, 1, 0x100000001ll };
	for(i=0;i<m;i++) {
		cin >> r >> c;
		ll rc = r*0x100000000ll + c;
		for(j=0;j<4;j++) {
			if (A.count(rc+B[j])) break;
		}
		if (j==4) {
			ans++;
			for(j=0;j<4;j++) A.insert(rc+B[j]);
		}
	}
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,t1,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s,s1;
	cin >> n;
	map<string,ll> ST;
	s1 = "";
	t1 = -1;
	for(i=0;i<n;i++) {
		cin >> s >> t;
		if (ST.count(s)) continue;
		if (t>t1) {
			t1 = t;
			s1 = s;
			ans = i+1;
		}
		ST[s] = t;
	}
	cout << ans << endl;
	return 0;
}

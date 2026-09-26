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
	cin >> s;
	map<char,ll> mp;
	for(i=0;i<3;i++) mp[s[i]] = 1;
	switch(mp.size()) {
		case 1:
			ans = 1;
			break;
		case 2:
			ans = 3;
			break;
		case 3:
			ans = 6;
	}
	cout << ans << endl;
	return 0;
}

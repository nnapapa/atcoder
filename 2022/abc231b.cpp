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
	cin >> n;
	map<string,ll> mp;
	for(i=0;i<n;i++) {
		cin >> s;
		mp[s]++;
	}
	for(auto p : mp) {
		if (ans<p.second) {
			s = p.first;
			ans = p.second;
		}
	}

	cout << s << endl;
	return 0;
}

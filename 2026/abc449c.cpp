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
	cin >> n >> l >> r >> s;
	map<char,ll> mp;
	for(i=l;i<=r;i++) mp[s[i]]++;
	for(i=0;i<n;i++) {
		ans += mp[s[i]];
		if (l<n) mp[s[l]]--;
		if (++r<n) mp[s[r]]++;
		l++;
		//cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

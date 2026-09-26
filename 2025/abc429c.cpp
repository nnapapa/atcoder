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
	map<ll,ll> mp;
	cin >> n;
	vector<ll> A(n);
	for(i=0;i<n;i++) {
		cin >> A[i];
		mp[A[i]]++;
	}
	for(auto p : mp) {
		ans += p.second*(p.second-1)/2*(n-p.second);
	}

	cout << ans << endl;
	return 0;
}

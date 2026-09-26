#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* 約数列挙 */
vector<ll> divisor(ll n) {
	vector<ll> ret;
	for(ll i=1;i*i<=n;i++) {
		if (n%i==0) {
			ret.push_back(i);
			if (i*i!=n) ret.push_back(n/i);
		}
	}
	//sort(ret.begin(),ret.end());
	return ret;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	map<ll,ll> mp;
	vector<ll> Y;
	for(i=0;i<n;i++) {
		cin >> a;
		mp[a]++;
	}
	for(auto p : mp) {
		a = p.first;
		c = p.second;
		Y = divisor(a);
		for(i=0;i<Y.size();i++) {
			if (mp.count(Y[i]) & mp.count(a/Y[i])) {
				ans += c*mp[Y[i]]*mp[a/Y[i]];
			} 
		}

	}
	cout << ans << endl;
	return 0;
}

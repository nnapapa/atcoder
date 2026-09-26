#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
/* 約数列挙 */
vector<ll> divisor(ll n) {
	vector<ll> ret;
	ll x = sqrt(n);
	for(ll i=x;i>=1;i--) {
		if (n%i==0) {
			ret.push_back(i);
			if (i*i!=n) ret.push_back(n/i);
			x+=2;
		}
		if (x==4) break;
	}
	//sort(ret.begin(),ret.end());
	return ret;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,s;
	ll		ans = 0;
	cin >> s;
	vector<ll> aa;
	aa = divisor(s);
	for(i=0;i<4;i++) cout << aa[i] << " ";
	cout << endl;
	cout << ans << endl;
	return 0;
}

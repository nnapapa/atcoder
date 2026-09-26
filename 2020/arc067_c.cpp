#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* 素因数分解 */
map<ll,ll> retmap;
void pf(ll n) {
	if (n<=1) return;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
			pf(i);
			pf(n/i);
      return;
		}
	}
  retmap[n]++;
	return;
}
/* 素因数分解からの約数の個数 */
ll divisorcount() {
  ll ret = 1;
  for(auto p : retmap) {
		//cout << p.first << '^' << p.second << endl;
    ret *= p.second + 1;
		ret %= 1000000007;
  }
  return ret;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	for(i=1;i<=n;i++) {
		pf(i);
		//cout << divisorcount() << endl;
	}
	ans = divisorcount();
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
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


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	pf(n);
	//for(auto p:retmap) {
	//	cout << p.first << " " << p.second << endl;
	//}
	for(auto p:retmap) ans+=p.second;
	a = 1; c = 0;
	while(a<ans) { a = a*2; c++;}
	cout << c << endl;
	return 0;
}

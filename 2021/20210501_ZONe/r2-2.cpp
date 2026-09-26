#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
/* 素数判定 1:素数 0:素数ではない */
vector<ll> memo(100001,-1);
ll pfchk(ll n) {
	if (memo[n]!=-1) return memo[n];
  if (n<=1) return memo[n] = 0;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
      return memo[n] = 0;
		}
	}
	return memo[n] = 1;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	for(i=0;i<400;i++) {
		cin >> n;
		if (pfchk(n)) ans++;
	}

	cout << ans << endl;
	return 0;
}

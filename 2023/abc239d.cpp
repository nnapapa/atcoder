#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

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
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	string	s = "Aoki";
	cin >> a >> b >> c >> d;

  for(i=a;i<=b;i++) {
    x = 1;
    for(j=c;j<=d;j++) {
      if (pfchk(i+j)) x = 0;
    }
    if (x) {
      s = "Takahashi";
      break;
    }
  }
	cout << s << endl;
	return 0;
}

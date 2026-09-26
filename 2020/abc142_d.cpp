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
ll divisorcount(ll n) {
  pf(n);
  ll ret = 1;
  for(auto p : retmap) {
    //cout << p.first << '^' << p.second << endl;
    ret *= p.second + 1;
  }
  return ret;
}

/* 素数判定 1:素数 0:素数ではない */
vector<int> memo(100001,-1);
int pfc(ll n) {
	if (memo[n]!=-1) return memo[n];
  if (n<=1) return memo[n] = 0;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
      return memo[n] = 0;
		}
	}
	return memo[n] = 1;
}

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
/* 最大公約数 (ユークリッドの互除法) */
long long gcd(long long m, long long n) {
	long long temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> a >> b;

	c = gcd(a , b);
	pf(c);

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	/*
	for(auto p:retmap) {
		cout << p.first << ":" << p.second << endl;
	}
	*/
	cout << retmap.size()+1 << endl;
	return 0;
}

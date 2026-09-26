#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
//nPr 順列計算(n!/(n-r)!)
ll nPr(ll n, ll r) {
  ll ret = 1;
	for(ll i=n;i>(n-r);i--) ret = ret * i;
	return ret;
}
// 繰り返し二乗法 (xのn乗)
ll pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}
int main() {
	ll		a,b,d,h,i,j,k,l,o,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	o = 0;
	for(i=0;i<10;i++) if (s[i]=='o') o++;
	char t[5] = {0};
	int c[10];
	for(i=0;i<10000;i++) {
		sprintf(t,"%04d",i);
		for(j=0;j<10;j++) c[j]=0;
		bool f = true;
		for(j=0;j<4;j++) {
			if (s[t[j]-'0']=='x') f = false;
			if (s[t[j]-'0']=='o') c[t[j]-'0'] = 1;
			//cout << f << endl;
		}
		for(j=0,x=0;j<10;j++) x += c[j];
		//for(j=0;j<10;j++) cout << c[j] << " ";
		//cout << "x" << x << " o" << o << endl;
		if (x!=o) f = false; 
		if (f) ans++;
	}

	cout << ans << endl;
	return 0;
}

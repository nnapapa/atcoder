#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
lll pow(lll x, lll n) {
    lll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}
//階乗 n!
lll calcProduct(lll n) {
  return (n <= 1) ? 1: n * calcProduct(n - 1);
}
//nPr 順列計算(n!/(n-r)!)
lll nPr_tmp(lll n, lll r, lll initn) {
  return (n == initn-r) ? 1: n * nPr_tmp(n - 1 , r , initn);
}
lll nPr(lll n, lll r) {
	return nPr_tmp(n , r , n);
}
lll nCr(lll n, lll r) {
  return nPr(n,r)/calcProduct(r);
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,p,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> p;
	ll o=0,e=0;
	for(i=0;i<n;i++) {
		cin >> a;
		if (a&1) o++; else e++;
	}
	//cout << e << " " << o << endl;
	for(i=p;i<=o;i+=2) {
		//cout << pow(2,e) << endl;
		//cout << nCr(o,i) <<  endl;

		ans += pow(2,e) * nCr(o,i);
		//cout << pow(2,e) << " " << nCr(o,i) << " " << ans << endl;
	}

	cout << ans << endl;
	return 0;
}

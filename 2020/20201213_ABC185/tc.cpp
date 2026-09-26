#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

//nPr 順列計算(n!/(n-r)!  %MODあり)
lll nPr_tmp(lll n, lll r, lll initn) {
  return (n == initn-r) ? 1LL: n * nPr_tmp(n - 1LL , r , initn);
}
lll nPr(lll n, lll r) {
	return nPr_tmp(n , r , n);
}
//階乗 n!
lll calcProduct(lll n) {
  return (n == 1LL) ? 1LL: n * calcProduct(n - 1LL);
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans;
	cin >> l;

	ans = nPr(l-1 , 11LL) / calcProduct(11LL);

	cout << ans << endl;
	return 0;
}

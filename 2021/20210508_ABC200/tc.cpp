#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

//階乗 n!
ll calcProduct(ll n) {
  ll ret = 1;
  for(ll i=n;i>0;i--) ret = ret * i;
  return ret;
}
//nPr 順列計算(n!/(n-r)!)
ll nPr(ll n, ll r) {
  ll ret = 1;
	for(ll i=n;i>(n-r);i--) ret = ret * i;
	return ret;
}
//nCr 組み合わせ計算(nPr/r!)
ll nCr(ll n, ll r) {
  return nPr(n,r)/calcProduct(r);
}

ll combi(ll n, ll r) {
    if (r == 0) {
        return 1;
    }
    
    return (n - r + 1) * combi(n, r - 1) / r;
}


int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	vector<ll>	A(n),Z(n+1,INFL);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) {
		Z[i] = A[i] % 200;
	}
	sort(Z.begin(), Z.end());
	a = Z[0];
	c = 1;
	for(i=1;i<=n;i++) {
		if (a==Z[i]) c++;
		else {
			if (c>1) {
				//cout << c << endl;
				ans += combi(c , 2);
			}
			a = Z[i];
			c = 1;
		}
	}

	cout << ans << endl;
	return 0;
}

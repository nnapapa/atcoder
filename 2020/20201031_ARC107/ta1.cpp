#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 998244353
using mint = modint998244353;

int main() {
	ll		d,h,i,j,k,l,m,n,v,w,x,y,z;
	mint	a,b,c;
	ll		ans = 0;
	string	s;
	cin >> x >> y >> z;

	a = x; b = y; c = z;
	a = (a+1)*(a)/2;
	b = (b+1)*(b)/2;
	c = (c+1)*(c)/2;
	a = a*b*c;
	
	//ans = a;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << a.val() << endl;
	return 0;
}

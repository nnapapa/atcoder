#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
bool chk(ll a , ll b) {
	if (b==a+1) return true;
	if (a==9 && b==0) return true;
	return false;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	abcd, s = "Strong";
	vector<ll> X(4);
	cin >> x;
	d = x % 10;
	x /= 10;
	c = x % 10;
	x /= 10;
	b = x % 10;
	a = x / 10; 
	//cout << a << b << c << d << endl;
	if (a==b && b==c && c==d) s = "Weak";
	else {
		if (chk(a,b) && chk(b,c) && chk(c,d)) s = "Weak";
	}

	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

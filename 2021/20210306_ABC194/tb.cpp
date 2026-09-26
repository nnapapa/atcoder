#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	vector<pair<ll,ll>>	A(n),B(n);
	for(i=0;i<n;i++) {
		cin >> a >> b;
		A[i] = make_pair(a,i);
		B[i] = make_pair(b,i);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	a = A[0].first;
	b = B[0].first;
	ll ai = A[0].second;
	ll bi = B[0].second;
	c = A[1].first;
	d = B[1].first;
	ll ci = A[1].second;
	ll di = B[1].second;

	if (ai!=bi) ans = max(a,b);
	else {
		ans = a+b;
		ans = min(ans , max(a,d));
		ans = min(ans , max(b,c));
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

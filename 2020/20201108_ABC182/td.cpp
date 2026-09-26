#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n+1,0),mx(n+1,-INFL),ed(n+1,0),ed1(n+1,0),ab(n+1,0);
	for(i=1;i<=n;i++) {
		cin >> aa[i];
		ab[i] += ab[i-1] + aa[i];
	}

	for(i=1;i<=n;i++) {
		ed[i] = ed[i-1] + ab[i];
		ed1[i]= ed1[i-1] + aa[i];
		mx[i] = max(mx[i-1],ed1[i]);
	}

	for(i=1;i<=n;i++) {
		ans = max(ans , ed[i-1]+mx[i]);
	}
/*
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	for(i=1;i<=n;i++) cout << aa[i] << ' ';
	cout << endl;
	for(i=1;i<=n;i++) cout << ab[i] << ' ';
	cout << endl;

	for(i=1;i<=n;i++) cout << mx[i] << ' ';
	cout << endl;
	for(i=1;i<=n;i++) cout << ed[i] << ' ';
	cout << endl;
*/
	cout << ans << endl;
	return 0;
}

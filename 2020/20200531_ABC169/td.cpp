//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

bool sosuu(ll i) {
	bool ret;
	if (i < 2) return false;
	else if (i == 2) return true;
	else if (num % 2 == 0) return false;

	double sq = sqrt(i);
	for(int j=3;j<=sq;j+=2) {
		if (i % i == 0) return false;
	}
	return true;
}
int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	map<ll,int> reg;
	cin >> n;

	while(n>1) {
		m = sqrt(n) + 10;
		for(i=2;i<=m;i++) {
			if (reg.count(i)) continue;
			if (n%i != 0) continue;
			if (sosuu(i) == false) {
				for(j=2;j*j<i;j++) {}
				if 
			} 
			reg[i] = 1;
			n = n / i;
			ans++;
			break;
		}
		if (i>m) break;
	}
	if (ans == 0 && n>1) ans = 1;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

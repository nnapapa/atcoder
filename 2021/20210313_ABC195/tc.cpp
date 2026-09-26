#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	if (n<1000) {
		cout << ans << endl;
		return 0;
	}
	if (n<1000000) {
		cout << n - 999 << endl;
		return 0;
	}
	//1,000 - 999,999
	ans = 999999 - 999;
	if (n<1000000000) {
		cout << (n - 999999)*2 + ans << endl; 
		return 0;
	}
	// 1,000,000 - 999,999,999
	ans += (999999999 - 999999)*2;
	if (n<1000000000000) {
		cout << (n - 999999999)*3 + ans << endl;
		return 0;
	}
	// 1,000,000,000 - 999,999,999,999
	ans += (999999999999LL - 999999999LL)*3;
	if (n<1000000000000000LL) {
		cout << (n - 999999999999LL)*4 + ans << endl;
		return 0;
	}
	// 1,000,000,000,000 - 999,999,999,999,999
	ans += (999999999999999LL - 999999999999LL)*4;
	// 1,000,000,000,000,000
	ans += 5;
	cout << ans << endl;
	
	return 0;
}

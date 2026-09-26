//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = int;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,pc,h,i,j,k,l,m,n,x,xx,y;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	x = 0;
	unordered_map<ll,ll> dp,dp2;
	for(i=0;i<n;i++) {
		x = x << 1;
		if (s[i]=='1') x++;
	}
	for(i=1;i<=n;i++) {
		ans=0;
		b = a = x ^ (1 << (n-i));
		while(a!=0) {
			ans++;
			if (dp2.count(a)) {
				ans += dp2[a];
				break;
			}
			pc = __builtin_popcount(a);
			a = a % pc;
		}
		dp2[b] = ans;
		cout << ans << endl;
	}
	return 0;
}

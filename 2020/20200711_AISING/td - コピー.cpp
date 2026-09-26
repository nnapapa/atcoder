//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,pc,h,i,j,k,l,m,n,x,xx,y;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	x = 0;
	for(i=0;i<n;i++) {
		x = x << 1;
		if (s[i]=='1') x++;
	}
	for(i=1;i<=n;i++) {
		ans=0;
		a = x ^ (1 << (n-i));
		while(a!=0) {
			ans++;
			pc = 0;
			b = a;
			while(b!=0) {
				if (b&1==1) pc++;
				b = b >> 1;
			}
			a = a % pc;
		}
		cout << ans << endl;
	}
	return 0;
}

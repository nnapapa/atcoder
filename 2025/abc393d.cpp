#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	x = 0;
	for(i=0;i<n;i++) if (s[i]=='1') x++;
	x = x/2 + 1;
	for(i=0,c=0;i<n;i++) {
		if (s[i]=='1') {
			c++;
		}
		if (x==c) break;
	}
	c = i;
	//cout << c << endl;
	for(i=0,b=c-1;i<c;i++) {
		if (s[i]=='1') {
			ans += b - i;
			b--; 
		}
	}
	//cout << ans << endl;
	for(i=c+1,b=c+1;i<n;i++) {
		if (s[i]=='1') {
			ans += i - b;
			b++; 
		}
	}
	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	j = 0;
	for(i=0;i<3;i++) {
		if (s[i]=='R') {
			ans = max(ans , ++j);
		} else {
			j = 0;
		}
	}
	cout << ans << endl;
	return 0;
}

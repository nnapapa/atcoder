//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> s;
	ans = s.size();
	while(1) {
		ans -= 2;
		x = 1;
		for(i=0;i<ans/2;i++) {
			if (s[i]!=s[i+ans/2]) x = 0;
		}
		if (x) break;
	}
	cout << ans << endl;
	return 0;
}

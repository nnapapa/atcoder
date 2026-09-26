//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,c,i,j,k,n,m,x,y,ans = 0;
	ll		w = 0;
	ll		b = 0;
	string	s;

	cin >> s;
	n = s.size();
	for(i=0;i<n;i++) {
		if (s[i]=='W') w++;
	}
	b = w+1;

	for(i=0;i<w;i++) {
		if (s[i]=='B') {
			ans += w - i;
		}
	}
	for(;i<n;i++) {
		if (s[i]=='W') {
			ans += i - w;
		}
	}


	cout << ans << endl;
	return 0;
}

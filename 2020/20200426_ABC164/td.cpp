//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL


int main() {
	unsigned long long		a,b,c,i,j,k,n,m,x,y,ans = 0;

	string	s;
	cin >> s;
	n = s.size();
	if (n<4) {
		cout << 0 << endl;
		return 0;
	}
	for(i=0;i<n-3;i++) {
		x = s[i]-'0';
		x = x*10 + s[i+1]-'0';
		x = x*10 + s[i+2]-'0';
		for(j=i+3;j<n;j++) {
			x = (x*10 + s[j]-'0') % 2019;
			if (x==0) ans++;
		}

	}
	cout << ans << endl;

}

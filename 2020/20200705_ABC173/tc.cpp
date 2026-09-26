//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,h,w,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> h >> w >> k;
	vector<string>	c(h);
	for(i=0;i<h;i++) cin >> c[i];

	for(i=0;i<(1<<h);i++) {
		for(j=0;j<(1<<w);j++) {
			a = 0;
			for(x=0;x<h;x++) for(y=0;y<w;y++) {
				if (c[x][y]=='#') {
					if ( ((i & (1<<x)) == 0) && ((j & (1<<y)) == 0) ) a++; 
				}
			}
			if (a==k) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	cin >> h >> w >> k;
	vector<string>	s(h);
	vector<vector<int>> ans(h,vector<int>(w,-1));
	for(i=0;i<h;i++) cin >> s[i];
	c = 1;
	for(i=0;i<h;i++) {
		a = 0;
		for(j=0;j<w;j++) if (s[i][j]=='#') a++;
		if (a>0) {
			for(j=0;j<w;j++) {
				ans[i][j] = c;
				if (s[i][j]=='#') {
					c++;
					if (--a==0) for(j+=1;j<w;j++) ans[i][j] = c-1;
				}
			}
		}
	}
	a = -1;
	for(i=0;i<h;i++) {
		if (ans[i][0]!=-1) a = i;
		else if (a!=-1) for(j=0;j<w;j++) ans[i][j] = ans[a][j];
	}
	a = -1;
	for(i=h-1;i>=0;i--) {
		if (ans[i][0]!=-1) a = i;
		else if (a!=-1) for(j=0;j<w;j++) ans[i][j] = ans[a][j];
	}
	for(i=0;i<h;i++) {
		cout << ans[i][0];
		for(j=1;j<w;j++) cout << " " << ans[i][j];
		cout << endl;
	}
	return 0;
}

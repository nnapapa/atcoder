#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
char ss[200][200] = { 0 };

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;

	cin >> h >> w;
	for(i=1;i<=h;i++) {
		cin >> s;
		for(j=1;j<=w;j++) {
			ss[i][j] = s[j-1];
		}
	}

	for(i=1;i<=h;i++) {
		for(j=1;j<=w;j++) {
			if (ss[i][j]=='#') continue;
			if (ss[i-1][j]=='.') ans++;
			if (ss[i+1][j]=='.') ans++;
			if (ss[i][j-1]=='.') ans++;
			if (ss[i][j+1]=='.') ans++;
		}
	}


	cout << ans/2 << endl;
	return 0;
}

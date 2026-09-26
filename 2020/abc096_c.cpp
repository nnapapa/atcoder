#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string		ans = "Yes";
	ll dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
	cin >> h >> w;
	vector<string>	s(h);
	for(i=0;i<h;i++) cin >> s[i];
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			if (s[i][j]=='#') {
				bool f = false;
				for(k=0;k<4;k++) {
					ll nx=i+dx[k] , ny=j+dy[k];
					if (0<=nx && nx<h && 0<=ny && ny<w && s[nx][ny]=='#') f = true;
				}
				if (!f) ans = "No";
			}
		}
	}
	cout << ans << endl;
	return 0;
}

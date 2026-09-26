#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> h >> w >> x >> y;
	x--;
	y--;
	vector<string>	S(h);
	for(i=0;i<h;i++) cin >> S[i];
	for(i=x+1;i<h;i++) if (S[i][y]=='#') break; else ans++;
	for(i=x-1;i>=0;i--) if (S[i][y]=='#') break; else ans++;
	for(j=y+1;j<w;j++) if (S[x][j]=='#') break; else ans++;
	for(j=y-1;j>=0;j--) if (S[x][j]=='#') break; else ans++;

	cout << ans << endl;
	return 0;
}

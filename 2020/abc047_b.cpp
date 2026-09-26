#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> w >> h >> n;
	vector<vector<ll>> wk(h,vector<ll>(w,1));
	for(c=0;c<n;c++) {
		cin >> x >> y >> a;
		if (a==1) for(i=0;i<h;i++) for(j=0;j<x;j++) wk[i][j] = 0;
		if (a==2) for(i=0;i<h;i++) for(j=x;j<w;j++) wk[i][j] = 0;
		if (a==3) for(i=0;i<y;i++) for(j=0;j<w;j++) wk[i][j] = 0;
		if (a==4) for(i=y;i<h;i++) for(j=0;j<w;j++) wk[i][j] = 0;
	}
	for(i=0;i<h;i++) for(j=0;j<w;j++) ans += wk[i][j];
	/*ll		minx = w, miny = h, maxx = 0, maxy = 0;
	for(i=0;i<n;i++) {
		cin >> x >> y >> a;
		if (a==1) maxx = max(maxx,x);
		if (a==2) minx = min(minx,x);
		if (a==3) maxy = max(maxy,y);
		if (a==4) miny = min(miny,y);
	}
	if (minx<maxx || miny<maxy) ans = 0;
	else ans = (minx - maxx + 0) * (miny - maxy + 0);*/
	//printf("%d %d %d %d\n",maxx,minx,maxy,miny);

	cout << ans << endl;
	return 0;
}

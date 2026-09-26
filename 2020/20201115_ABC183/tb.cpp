#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double		ans = 0;
	double		sx,sy,gx,gy;
	cin >> sx >> sy >> gx >> gy;

	//if (gy > sy)
	ans = sy/(sy + gy) * (gx - sx) + sx;
	//else ans = gy/sy * (gx - sx) + sx;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	printf("%.9f\n",ans);
	return 0;
}

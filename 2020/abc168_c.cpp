//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,h,m,x,y;
	string	s;
	cin >> a >> b >> h >> m;
	double hh,mm,deg,ans;

	hh = double(h*60+m) / 2;
	mm = m*6;

	deg = abs(hh-mm);
	if (deg > 180) deg = 360 - deg;
	//printf("%f\n",deg);

	deg = deg * (M_PI/180);
	//printf("%f\n",deg);
	ans = sqrt( a*a + b*b - 2*a*b*cos(deg));

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	printf("%.10f\n",ans);
	//cout << ans << endl;
	return 0;
}

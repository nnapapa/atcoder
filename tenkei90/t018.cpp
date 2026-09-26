#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
# define M_PI           3.14159265358979323846
/* 座標(x, y) を，(xc, yc)を中心に時計回りにthetaラジアン回転した座標を*xp, *yp に返す関数 rotation2D() */
/* 座標(x, y)は(→,↓)、関数内の数学座標は(→,↑) */

void rotation2D( double * xp, double * yp, double x, double y, double xc, double yc, double theta  ) {
	//y = -y; yc = -yc; // 数学座標と同じ様にするためにy座標値を反転
	*xp = (x - xc) * cos(theta) - (y - yc) * sin(theta) + xc;
	*yp = (x - xc) * sin(theta) + (y - yc) * cos(theta) + yc;
	//*yp = *yp * -1.0; // 元の座標に戻すためにy座標値を反転
}
 
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,t,q,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> t;
	cin >> l >> x >> y;
	cin >> q;
	vector<ll>	E(q);
	vector<double> A(q);
	for(i=0;i<q;i++) cin >> E[i];
	for(i=0;i<q;i++) {
		double kaku = (double)E[i] / t * 360.0 * M_PI / 180.0;
		double xp=0,yp,zp,tei,sha;
		rotation2D(&yp , &zp , 0.0 , 0.0 , 0.0 , (double)l/2.0 , kaku);
		tei = sqrt(x*x + (y-yp)*(y-yp));
		//printf("%f %f\n",zp,tei);
		A[i] = atan2(zp , tei) * 180.0/M_PI;
	}
	for(i=0;i<q;i++) printf("%.10f\n",A[i]);
	return 0;
}

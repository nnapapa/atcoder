#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
# define M_PI           3.14159265358979323846  /* pi */
/* 座標(x, y) を，(xc, yc)を中心にthetaラジアン回転した座標をそれぞれ，*xp, *yp に返す関数 rotation2D() */
void rotation2D( double * xp, double * yp, double x, double y, double xc, double yc, double theta  ) {
	y = -y; yc = -yc; // 数学座標と同じ様にするためにy座標値を反転
	*xp = (x - xc) * cos(theta) - (y - yc) * sin(theta) + xc;
	*yp = -1.0 * ( (x - xc) * sin(theta) + (y - yc) * cos(theta) + yc );
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double		ans = 0;
	double x0,y0,xa,ya,xn,yn,xc,yc,kaku;
	cin >> n >> x0 >> y0 >> xn >> yn;
	xc = (double)abs(x0-xn)/2 + min(x0,xn);
	yc = (double)abs(y0-yn)/2 + min(y0,yn);
	//cout << xc << " " << yc << endl;
	kaku = 360.0/n*(n-1) * M_PI / 180.0;

	rotation2D(&xa,&ya,x0,y0,xc,yc,kaku);
	printf("%.7f %.7f\n",xa,ya);

	return 0;
}

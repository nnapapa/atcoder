#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
double memo[101][101][101];
double calc(int a, int b, int c) {
	if (a>=100 || b>=100 || c>=100) return 0;
	if (memo[a][b][c]!=-1) return memo[a][b][c];
	double ret,m = a + b + c;
	ret = 1 + (double)a/m*calc(a+1,b,c)
	        + (double)b/m*calc(a,b+1,c)
				  + (double)c/m*calc(a,b,c+1);
	return memo[a][b][c] = ret;
}
int main() {
	int				a,b,c,i,j,k;
	double		ans = 0;
	cin >> a >> b >> c;
	for(i=0;i<=100;i++) for(j=0;j<=100;j++) for(k=0;k<=100;k++) memo[i][j][k] = -1;
	ans = calc(a,b,c);

	printf("%.8f\n",ans);
	return 0;
}

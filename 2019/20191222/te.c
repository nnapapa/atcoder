#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
int main()
{
	
	long long		a,b,c,i,j,k,n,m,x,y,ans = 0;
	
	scanf("%lld", &n);
	a = 1;
	if (n & a == 1) {
		printf("0\n");
		return 0;
	}
	
	//偶数//
	
	ans  = n / 10;
	ans += n / 100;
	ans += n / 1000;
	ans += n / 10000;
	ans += n / 100000;
	ans += n / 1000000;
	ans += n / 10000000;
	ans += n / 100000000;
	ans += n / 1000000000;
	ans += n / 10000000000ll;
	ans += n / 100000000000ll;
	ans += n / 1000000000000ll;
	ans += n / 10000000000000ll;
	ans += n / 100000000000000ll;
	ans += n / 1000000000000000ll;
	ans += n / 10000000000000000ll;
	ans += n / 100000000000000000ll;
	ans += n / 1000000000000000000ll;

	ans += n / 50;
	ans -= n / 200;
	/*
	ans -= n / 500;
	ans -= n / 5000;
	ans -= n / 50000;
	ans -= n / 500000;
	ans -= n / 5000000;
	ans -= n / 50000000;
	ans -= n / 500000000;
	ans -= n / 5000000000ll;
	ans -= n / 50000000000ll;
	ans -= n / 500000000000ll;
	ans -= n / 5000000000000ll;
	ans -= n / 50000000000000ll;
	ans -= n / 500000000000000ll;
	ans -= n / 5000000000000000ll;
	ans -= n / 50000000000000000ll;
	ans -= n / 500000000000000000ll;
	*/
	
	printf("%lld\n",ans);
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
long long int keta(long long int k) {
	if (k < 10) return (1);
	if (k < 100) return (2);
	if (k < 1000) return (3);
	if (k < 10000) return (4);
	if (k < 100000) return (5);
	if (k < 1000000) return (6);
	if (k < 10000000) return (7);
	if (k < 100000000) return (8);
	if (k < 1000000000) return (9);
	return (10);
}
	
int main()
{
	long long int d;
	long long int		x,a,b,c,i,j,k,l,n,m,y,ans = 0;

	
	scanf("%lld %lld %lld", &a, &b, &x);
	//printf("%lld %lld %lld\n", a , b , x);
	
	m = 1000000000;
	ans = a*m+b*keta(m);
	
	if (x >= ans) {
		printf("%lld\n",m);
		return 0;
	}
	//printf("n d = %lld %lld\n",n,d);
	l = 0;
	while(1) {
		if (m==l) break;
		if (m==l+1) break;
		n = (m - l) / 2 + l;
		ans = a*n+b*keta(n);
		if (x >= ans) {
			l = n;
		} else {
			m = n;
		}
		//printf("l m : %lld %lld\n",l,m);
	}
	
	printf("%lld\n",l);
	return 0;
}

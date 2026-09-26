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
	if (k < 10000000000ll) return (10);
	if (k < 100000000000ll) return (11);
	if (k < 1000000000000ll) return (12);
	if (k < 10000000000000ll) return (13);
	if (k < 100000000000000ll) return (14);
	if (k < 1000000000000000ll) return (15);
	if (k < 10000000000000000ll) return (16);
	if (k < 100000000000000000ll) return (17);
	if (k < 1000000000000000000ll) return (18);


}
	
int main()
{
	long long int d;
	long long int		x,a,b,c,i,j,k,n,m,y,ans = 0;

	
	scanf("%lld %lld %lld", &a, &b, &x);
	//printf("%lld %lld %lld\n", a , b , x);
	
	n = x/a;
	n++;
	d = keta(n);
	//printf("n d = %lld %lld\n",n,d);
	while(1) {
		ans = a*n+b*d;
		//printf("nedan %lld\n",ans);
		if ( ans <= x) break;
		if (n==0) break;
		if (n>2000000000) {
			n = 1000000001;
		}
		n--;
		d = keta(n);
		//printf("n d = %lld %lld\n",n,d);

	}
	
	if (n > 1000000000) n = 1000000000;

	printf("%lld\n",n);


	return 0;
}

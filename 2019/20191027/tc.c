#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 0;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/

int main()
{
	int		a,c,k,q,n,m,x,y,ans = 0;
	long long  num,sqr,i,j;
	
	scanf("%lld", &num);
	
	sqr = (long long)sqrt( (double)num ) + 1;
	for(i=sqr;i>=2;i--) {
		if ( (num%i) == 0 ) {
			ans = 1;
			break;
		}
	}
	
	if (ans) {
		j = num / i;
		i = i + j - 2;
	} else {
		i = num - 1;
	}
	
	printf("%lld\n", i );


	return 0;
}

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
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	float	f;
	
	scanf("%d", &n);
	
	a = (int)( (float)n / 1.08);
	
	if ((int)((float)a * 1.08) == n ) {
		printf("%d\n",a);
	} else if ( (int)((float)(a+1) * 1.08) == n ) {
		printf("%d\n",a+1);
	} else if ( (int)((float)(a-1) * 1.08) == n ) {
		printf("%d\n",a-1);
	} else {
		printf(":(\n");
	}


	return 0;
}

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
	int		a,b,c,i,j,k,n,m,x,y;
	char	str[256];
	double  ans;
	
	scanf("%d", &n);

	for(i=1;i<=9;i++) {
		for(j=1;j<=9;j++) {
			if (n == (i*j)) {
				printf("Yes\n");
				return 0;
			}
		}
	}

	printf("No\n");

	return 0;
}

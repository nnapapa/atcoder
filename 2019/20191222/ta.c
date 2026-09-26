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
	char	s[256];
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if (a + b == 3) {
		printf("3\n");
	} else if (a + b == 4) {
		printf("2\n");
	} else if (a + b == 5) {
		printf("1\n");
	}



	return 0;
}

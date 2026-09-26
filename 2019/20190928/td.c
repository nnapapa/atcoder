#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
int	dp[100001][100001] = {0};

int main()
{
	int		a,b,c,i,j,k,n,m,x,y,al=0,ar=0,ans = 0;
	int		maxl = 0; maxr = 0;
	char	goal;

	scanf("%d %d", &a, &b);
	
		
	printf("%d\n",ans);


	return 0;
}

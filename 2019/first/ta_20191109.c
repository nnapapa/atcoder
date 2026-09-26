#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 0;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
char	s[500010];
int		ans[500010] = { 0 };
int		ans1[500010] = { 0 };
int main()
{
	int		i,j,k,n,c;
	char	x,y;
	long long a = 0;

	scanf("%d", &n);
	
	
	if (n<=2)	printf("0\n");
	else		printf("%d\n", (n-1)/2 );
	
	return 0;
}

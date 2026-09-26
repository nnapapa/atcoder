#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 0;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
int		s[100001] = { 0 };
	
int main()
{
	int		a,c,i,j,k,q,n,m,x,y,ans = 0;

	
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		scanf("%d", &a);
		s[a] = i;
	}
	
	for(i=1;i<n;i++) {
		printf("%d ",s[i]);
	}
	printf("%d\n",s[n]);


	return 0;
}

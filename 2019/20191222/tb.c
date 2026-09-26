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
	char	s[256],t[256];
	
	scanf("%d", &n);
	scanf("%s", s);
	scanf("%s", t);
	
	for(i=0;i<n;i++) {
		printf("%c%c",s[i],t[i]);
	}
	ENTER;
		



	return 0;
}

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
	char	str[256];
	
	scanf("%s", str);
	
	if ( strcmp(str,"SUN") == 0) printf("7\n");
	if ( strcmp(str,"MON") == 0) printf("6\n");
	if ( strcmp(str,"TUE") == 0) printf("5\n");
	if ( strcmp(str,"WED") == 0) printf("4\n");
	if ( strcmp(str,"THU") == 0) printf("3\n");
	if ( strcmp(str,"FRI") == 0) printf("2\n");
	if ( strcmp(str,"SAT") == 0) printf("1\n");
	

	return 0;
}

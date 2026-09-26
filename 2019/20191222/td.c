#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */

int		a[200001];
/* main *************************************************************/
int main()
{
	int		b,c,i,j,k,n,m,x,y,ans = 0;

	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		scanf("%d", &a[i]);
	}
	
	k = 1;
	for(i=1;i<=n;i++) {
		if (a[i] == k) {
			k++;
		} else {
			ans++;
		}
	}
	
	if (ans == n) ans = -1;

	printf("%d\n",ans);


	return 0;
}

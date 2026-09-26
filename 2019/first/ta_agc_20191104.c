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

	scanf("%s", s);
	n = strlen(s);
	
	c = 0;
	for(i=0;i<n;i++) {
		if (s[i] == '<') {
			ans[i] = c++;
			ans[i+1] = c;
		} else {
			ans[i] = c;
			c = 0;
		}
	}
	
	c = 0;
	for(i=n-1;i>=0;i--) {
		if (s[i] == '>') {
			ans1[i+1] = c++;
		} else {
			ans1[i+1] = c++;
			c = 0;
		}
	}
	
	for(i=0;i<=n;i++) {
		if (DBG) printf("%d ",ans[i]);
	}
	if (DBG) ENTER;
	for(i=0;i<=n;i++) {
		if (DBG) printf("%d ",ans1[i]);
	}
	if (DBG) ENTER;

	for(i=0;i<=n;i++) {
		if (ans[i] > ans1[i]) {
			a += ans[i];
		} else {
			a += ans1[i];
		}
	}

	printf("%lld\n",a);
	
	return 0;
}

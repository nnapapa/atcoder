#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
char	str[100000][11];

int compare1(const void *a, const void *b) {
	int aa = *((char *)a);
	int bb = *((char *)b);
	if (aa > bb) return 1;
	if (aa < bb) return -1;
	return 0;
}
void qsort1(char *base, int count) {
	/* void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)); */
	qsort((void *)base, count, sizeof(char), compare1);
}
int compare11(const void *a, const void *b) {
	return strcmp( (char *)a , (char *)b );
}

int main()
{
	int		i,j,k,n,m,x,y;
	long long ans = 0 , a = 0;

	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%s", str[i]);
		qsort1(str[i], 10);
	}
	
	if (DBG)
	for(i=0;i<n;i++) {
		printf("%s\n",str[i]);
	}
	
	qsort(str[0], n, 11, compare11);

	if (DBG)
	for(i=0;i<n;i++) {
		printf("%s\n",str[i]);
	}

	for(i=0,j=1;j<n;i++,j++) {
		if (strcmp(str[i],str[j])==0) {
			a++;
		} else {
			a = 0;
		}
		ans += a;
	}
	
	printf("%d\n",ans);


	return 0;
}

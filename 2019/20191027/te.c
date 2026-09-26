#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/


int a[1001],b[1001],c[1001][1001];
int n,m;

int calc(int *tp, int s, int ans) {
	int		t[13],i,x;
	if (s == m) {
		return ans;
	}
	for(i=1;i<=n;i++) t[i] = *(tp + i);
	ans += calc(t,s+1);

	x = 0;
	for(j=0;j<b[i];j++) {
		if (t[ c[i][j] ] == 0) {
			x++;
			t[ c[i][j] ] = 1;
		}
	}
	if (x != 0) ans += a[i];
	
	
int main()
{
	int		i,j,k,x,y,ans = 0;
	int		t[13] = {0};
	
	scanf("%d %d", &n, &m);
	for(i=0;i<m;i++) {
		scanf("%d %d", &a[i], &b[i]);
		for(j=0;j<b[i];j++) {
			scanf("%d", &c[i][j]);
		}
	}
	
	
	x = 0;
	for(i=0;i<m;i++) {
		y = x;
		for(j=0;j<b[i];j++) {
			if (t[ c[i][j] ] == 0) {
				x++;
				t[ c[i][j] ] = 1;
			}
		}
		if (x != y) ans += a[i];

	}
	

	if (x != n) printf("-1\n");
	else printf("%d\n", ans);


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DEBUG = 1;										/* デバッグプリント 提出時は0 */
char	*a[2001];
char	dph[2001][2001] = {-1};
char	dpl[2001][2001] = {-1};


int main()
{
	int		i, j, k, n, ans = 0;

	scanf("%d", &n);
	for(i=2;i<=n;i++) {
		a[i] = calloc(i, sizeof(char));
		scanf("%s",a[i]);
	}
	
	for(i=1;i<=n; i++) {
		dph[i][i] = 1;
		dpl[i][i] = 1;
	}
	for(i=1;i<n;i++) {
		for(j=i+1;j<=n;j++) {
			if (i+1==j) {
				if (*(a[j]+i-1) == '0') {		// jはiに負け
					dph[i][j]=0;
				} else {
					dph[i][j]=1;
				}
				if (*(a[j]+i-1) == '0') {		// jはiに負け
					dpl[i][j]=1;
				} else {
					dpl[i][j]=0;
				}
			} else {
				dph[i][j] = 0;
				for(k=i;k<j;k++){
					if (*(a[j]+k-1) == '1') {
						if ((dph[i][k] == 1)&&(dpl[k][j-1] == 1)) {
							dph[i][j] = 1;
							break;
						}
					}
				}
				dpl[i][j] = 0;
				for(k=i+1;k<=j;k++) {
					if (*(a[k]+i-1) == '0') {
						if ((dph[i+1][k] == 1)&&(dpl[k][j] == 1)) {
							dpl[i][j] = 1;
							break;
						}
					}
				}
			}
			if (DEBUG) printf("dpl(%d,%d) %d dph(%d,%d) %d ",i,j,dpl[i][j],i,j,dph[i][j]);
		}
		if (DEBUG) ENTER;
	}

	for(i=1;i<=n;i++) {
		if ((dph[1][i] == 1)&&(dpl[i][n] == 1)) ans++;
	}

	printf("%d\n",ans);


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */

int counter(int a) {	// bitを数える
	int i, ans = 0;
	for(i=0;i<20;i++) {
		if (a & (1 << i)) ans++;
	}
	return ans;
}

/* main *************************************************************/
int main()
{
	int		a[20],b,c,i,j,k,n,m,x[20][20],y[20][20],f,ans;
	char	str[256];
	
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		for(j=1;j<=a[i];j++) {
			scanf("%d %d", &x[i][j], &y[i][j]);
		}
	}
	
	k = 1;
	for(i=1;i<=n;i++) k = k*2;
	k = k - 1;
	
	m = 0;
	for(ans=k;ans>=0;ans--) {
		f = 1;
		for(i=1;i<=n;i++) {
			if (ans & (1 << (i-1) )) {		// 正直者
				for(j=1;j<=a[i];j++) {
					if (y[i][j]) {			// xは正直者
						if ((ans & (1 << (x[i][j]-1) )) == 0) f = 0; //矛盾
					} else {				// xは不親切
						if ((ans & (1 << (x[i][j]-1) )) != 0) f = 0; //矛盾
					}
				}
			}
		}
		
		if (f) {	//矛盾しない
			m = max(m , counter(ans) );
		}
	}
	
	printf("%d\n",m);


	return 0;
}

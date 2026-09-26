#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
char	s[30001];
int		num[1000] = { 0 };
int main()
{
	int		a,c,i,j,k,n,m,x,y,z,ans = 0;
	int		b[3];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	
	for(i=0;i<1000;i++) {
		b[0] = i / 100 + '0';
		b[1] = (i % 100 ) / 10 + '0';
		b[2] = i % 10 + '0';
		a = 0;
		for(j=0;j<n;j++) {
			if (s[j] == b[a]) a++;
		}
		if (a == 3) ans++;
	}
	
	/*
	for(i=0;i<n-2;i++) {
		x = s[i] - '0';
		for(j=i+1;j<n-1;j++) {
			y = s[j] - '0';
			for(k=j+1;k<n;k++) {
				z = s[k] - '0';
				num[ x*100 + y*10 + z ] = 1;
			}
		}
	}
	
	for(i=0;i<1000;i++) {
		ans += num[i];
	}
	*/

	printf("%d\n",ans);


	return 0;
}

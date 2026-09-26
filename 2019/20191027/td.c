#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/

#define PI 3.141592653589793

int main()
{
	int		a,b,x;

	double  m,aa,bb,ans,mm;

	scanf("%d %d %d", &a, &b ,&x);
	
	m = (double)x/a;
	
	if ( (double)m <= (double)a*b/2 ) {
		aa = m/b*2;
		ans = atan( (double)b / aa)*180/PI;
		//printf("aa/b %f\n",aa/b);
	} else {
		mm = m - (double)a*b/2;
		m = (double)a*b/2 - mm;
		bb = m/a*2;
		ans = 90 - atan( (double)a / bb)*180/PI;
	}
	
	printf("%f\n",ans);

	//printf("%f %f\n",tan(45),atan(1));

	return 0;
}

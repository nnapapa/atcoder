#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int min4xi(int *a, int count);						/* int型配列から最小値サーチ index返却*/

/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DEBUG = 0;										/* デバッグプリント 提出時は0 */

struct bc {
	int B;
	int C;
};

int cmp(const void *a,const void *b) {
	struct bc  *aaa = (struct bc *)a;
	struct bc  *bbb = (struct bc *)b;
	if (aaa->C > bbb->C) return -1;
	else if (aaa->C < bbb->C) return 1;
	else return 0;
}
int cmp4(const void *a,const void *b) {
	int aa = *(int *)a;
	int bb = *(int *)b;
	if (aa > bb) return -1;
	else if (aa < bb) return 1;
	else return 0;
}

int main()
{
	long long		ans = 0;
	int		N,M,A[100000];
	int		i,j,k,x,y;
	struct bc  BC[100000];

	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++) {
		scanf("%d",&A[i]);
	}
	qsort(A,N,sizeof(int),cmp4);

	for(i=0;i<M;i++) {
		scanf("%d %d", &BC[i].B,&BC[i].C);
	}
	qsort(BC,M, sizeof(struct bc), cmp);

	for(i=0;i<N;i++) {
		for(j=0;j<BC[i].B;j++) {
			k = min4xi(A, N);
			if (DEBUG) printf("k:%d\n",k);

			if (A[k] < BC[i].C) {
				if (DEBUG) printf("%d <- %d\n", A[k],BC[i].C);
				A[k] = BC[i].C;
			} else break;
		}
	}

	for(i=0;i<N;i++) {
		ans += A[i];
	}
	printf("%ld\n",ans);


	return 0;
}

/* int型配列から最小値サーチ index返却*/
int min4xi(int *a, int count) {
	int ret = 0, min = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) < min) { min = *(a+i); ret = i; }
	}
	return ret;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
void swap(void *a, void *b, int size);				/* aとbを入れ替える */
int max1x(char *a, int count);						/* char型配列から最大値サーチ */
int min1x(char *a, int count);						/* char型配列から最小値サーチ */
int max4x(int *a, int count);						/* int型配列から最大値サーチ */
int max4xi(int *a, int count);						/* int型配列から最大値サーチ index返却 */
int min4x(int *a, int count);						/* int型配列から最小値サーチ */
int min4xi(int *a, int count);						/* int型配列から最小値サーチ index返却 */
int compare1(const void *a, const void *b);			/* sort()とsearch()が使用する昇順(0,1,2...)の比較関数 */
int compare4(const void *a, const void *b);			/* sort()とsearch()が使用する昇順(0,1,2...)の比較関数 */
void qsort1(char *base, int count);					/* char型配列の昇順sort */
void qsort4(int *base, int count);					/* int型配列の昇順sort */
char *bsearch1(char *key, char *base, int count);	/* char型配列のsearch 配列は昇順sortしておく必要がある */
int *bsearch4(int *key, int *base, int count);		/* int型配列のsearch 配列は昇順sortしておく必要がある */
void qsortstr(char *base, int count, int size);		/* 文字列配列の辞書順sort */
struct que{											/* que構造体 */
	struct dt { int data; } d;						/* ここを変える */
	struct que	*next;
};
struct que		*head = NULL;						/* que 先頭ポインタ */
struct que		*tail = NULL;						/* que 末尾ポインタ */
void initque();										/* queの初期化 */
struct que *makeque(void *datap);					/* queの要素作成 */
void delque(struct que *p);							/* queの要素削除 */
struct que *quetop();								/* queの先頭ポインタを返す */
void enque(struct que *new);						/* queの最後にエンキュー FIFO */
struct que *deque();								/* queの先頭からデキュー FIFO */
long gcd(long m, long n);							/* 最大公約数 */
long lcm(long m, long n);							/* 最小公倍数 */

int     hh[10][10] = {0};
#define xy0     hh[x-1][y-1]						// 0 1 2
#define xy1     hh[x-1][y  ]						// 3 4 5
#define xy2     hh[x-1][y+1]						// 6 7 8
#define xy3     hh[x  ][y-1]
#define xy4     hh[x  ][y  ]
#define xy5     hh[x  ][y+1]
#define xy6     hh[x+1][y-1]
#define xy7     hh[x+1][y  ]
#define xy8     hh[x+1][y+1]

char s[200001][11];
int  t[200001] = {0};

/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DBG = 1;										/* デバッグプリント 提出時は0 */
int main()
{

	int		a,b,c,i,j,k,n,m,x,y,ans = 0;

	
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%s", s[i]);
	}
	
	qsortstr(&s[0][0], n,11);
	
	t[0] = 1;
	for(i=1;i<n;i++) {
		if (strcmp(s[i-1],s[i]) == 0 ) t[i] = t[i-1] + 1;
		else t[i] = 1;
		ans = max(ans,t[i]);
	}
	for(i=0;i<n;i++) {
		if (t[i] == ans) printf("%s\n",s[i]);
	}
	

	return 0;
}

/********************************************************************************************************************************/
/* kunugi lib *******************************************************************************************************************/
/********************************************************************************************************************************/
/* aとbを入れ替える */
void swap(void *a, void *b, int size) {
	void *t = malloc(size);
	memcpy(t,a,size);
	memcpy(a,b,size);
	memcpy(b,t,size);
	free(t);
}
/* char型配列から最大値サーチ */
int max1x(char *a, int count) {
	int ret = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) > ret) ret = *(a+i);
	}
	return ret;
}
/* char型配列から最小値サーチ */
int min1x(char *a, int count) {
	int ret = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) < ret) ret = *(a+i);
	}
	return ret;
}
/* int型配列から最大値サーチ */
int max4x(int *a, int count) {
	int ret = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) > ret) ret = *(a+i);
	}
	return ret;
}
/* int型配列から最大値サーチ index返却*/
int max4xi(int *a, int count) {
	int ret = 0, max = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) > max) { max = *(a+i); ret = i; }
	}
	return ret;
}
/* int型配列から最小値サーチ */
int min4x(int *a, int count) {
	int ret = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) < ret) ret = *(a+i);
	}
	return ret;
}
/* int型配列から最小値サーチ index返却*/
int min4xi(int *a, int count) {
	int ret = 0, min = *a;
	for (int i=0; i<count; i++) {
		if (*(a+i) < min) { min = *(a+i); ret = i; }
	}
	return ret;
}
/* sort()とsearch()が使用する昇順(0,1,2...)の比較関数 */
int compare1(const void *a, const void *b) {
	int aa = *((char *)a);
	int bb = *((char *)b);
	if (aa > bb) return 1;
	if (aa < bb) return -1;
	return 0;
}
int compare4(const void *a, const void *b) {
	int aa = *((int *)a);
	int bb = *((int *)b);
	if (aa > bb) return 1;
	if (aa < bb) return -1;
	return 0;
}
/* char型配列の昇順sort */
void qsort1(char *base, int count) {
	/* void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)); */
	qsort((void *)base, count, sizeof(char), compare1);
}
/* int型配列の昇順sort */
void qsort4(int *base, int count) {
	/* void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)); */
	qsort((void *)base, count, sizeof(int), compare4);
}
/* char型配列のsearch 配列は昇順sortしておく必要がある */
char *bsearch1(char *key, char *base, int count) {
	/* void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); */
	return bsearch((void *)key, (void *)base, count, sizeof(char), compare1);
}
/* int型配列のsearch 配列は昇順sortしておく必要がある */
int *bsearch4(int *key, int *base, int count) {
	/* void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); */
	return bsearch((void *)key, (void *)base, count, sizeof(int), compare4);
}
/* 文字列配列の辞書順sort */
int comparestr(const void *a, const void *b) { return strcmp((char *)a, (char *)b); }
void qsortstr(char *base, int count, int size) {
	/* void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)); */
	qsort((void *)base, count, size, comparestr);
}

/* queの初期化 */
void initque() {
	head = tail = NULL;
}
/* queの要素作成 */
struct que *makeque(void *datap) {
	struct que *p = (struct que *)malloc(sizeof(struct que));
	memcpy(p, datap, sizeof(struct dt));
	return p;
}
/* queの要素削除 */
void delque(struct que *p) {
	free(p);
}
/* queの先頭ポインタを返す */
struct que *quetop() {
	if (head == NULL) return NULL;	/* queが空ならNULLを返す */
	return head;
}
/* queの最後にエンキュー FIFO */
void enque(struct que *new) {
	new->next = NULL;
	if (head == NULL) head = new; 
	else tail->next = new;
	tail = new;
}
/* queの先頭からデキュー FIFO */
struct que *deque() {
	struct que	*get;
	if (head == NULL) return NULL;	/* queが空ならNULLを返す */
	get = head;
	if (head == tail) head = tail = NULL;
	else head = head->next;
	return get;
}

/* 最大公約数 */
long gcd(long m, long n) {
	long temp;
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

/* 最小公倍数 */
long lcm(long m, long n) {
	return m*n/gcd(m,n);
}

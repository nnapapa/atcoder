#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DEBUG = 0;										/* デバッグプリント 提出時は0 */

struct  ball {
	int  i;
	char name;
	struct ball *sml;
	struct ball *big;
};

void prin(struct ball *bb ) {
	if (bb != NULL) {
		prin(bb->sml);
		printf("%c", bb->name);
		prin(bb->big);
	}
}
int main()
{

	int		N,Q,i,p;
	char	c;
	struct  ball b[26];

	for (i=0; i<26; i++ ) {
		b[i].i = i;
		b[i].name = 'A' + i;
		b[i].sml = b[i].big  = NULL;
	}
	scanf("%d %d", &N, &Q);
	if (DEBUG) printf("N Q:%d %d\n", N,Q);

	for(i=1; i<N; i++) {
		p = 0;
		do {
			printf("? %c %c\n",b[p].name, b[i].name);
			fflush(stdout);
			scanf(" %c", &c);
			if (DEBUG) printf("%c\n",c);
			if (c == '>') {
				if (b[p].sml==NULL) {
					b[p].sml = &b[i];
					break;
				} else {
					p = b[p].sml->i;
				}
			} else {
				if (b[p].big==NULL) {
					b[p].big = &b[i];
					break;
				} else {
					p = b[p].big->i;
				}
			}
		} while(1);
	}

	printf("! ");
	prin(b);
	printf("\n");
	fflush(stdout);
	return 0;
}


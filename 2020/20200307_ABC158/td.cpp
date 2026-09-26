#include <bits/stdc++.h>
using namespace std;

char	mae[200001] = { 0 };
char	ato[200001] = { 0 };
char	pr1[200001] = { 0 };
char	pr2[200001] = { 0 };
char	pr3[200001] = { 0 };

int main() {
	int		i,j,n;
	int		a,b,d,k,m,x,y,q,f,ans = 0;
	char	c;
	string	str;
	
	cin >> str >> n;

	int flag = 0;
	int mp = 0;
	int ap = 0;
	for(i=0;i<n;i++) {
		cin >> q;
		if ( q == 1 ) {
			flag++;
			continue;
		}
		cin >> f >> c;
		if ( f == 1 ) {	  // mae
			if ((flag & 1) == 0) {
				mae[mp++] = c;
			} else {
				ato[ap++] = c;
			}
		} else {
			if ((flag & 1) == 1) {
				mae[mp++] = c;
			} else {
				ato[ap++] = c;
			}
		}

	}

	for(i=mp,j=0;i>0;i--,j++) {
		pr1[j] = mae[i-1];
	}
	for(i=ap,j=0;i>0;i--,j++) {
		pr3[j] = ato[i-1];
	}



	if ((flag & 1) == 0) {
		printf("%s",pr1);
		cout << str;
		printf("%s\n",ato);
	} else {
		for(i=str.size(),j=0;i>0;i--,j++) {
			pr2[j] = str[i-1];
		}
		printf("%s",pr3);
		printf("%s",pr2);
		printf("%s\n",mae);
	}
	


	


}

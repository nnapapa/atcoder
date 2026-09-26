#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	
	cin >> x;
	
	
	for( i=x; ; i++) {
		k = 0;
		for(j=2;j<i;j++) {
			if (i%j==0) {
				k = 1;
				break;
			}
		}
		if (k==0) break;
	}
	
	
	cout << i << endl;
	

}

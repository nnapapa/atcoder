#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a[3][3];
	int		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	for(i=0;i<3;i++) for(j=0;j<3;j++)
		cin >> a[i][j];

	cin >> n;
	
	for(k=0;k<n;k++) {
		cin >> x;
		for(i=0;i<3;i++) for(j=0;j<3;j++) {
			if (a[i][j] == x) a[i][j] = 0;
		}
	}
	
	for(i=0;i<3;i++) {
		ans = 0;
		for(j=0;j<3;j++) {
			if (a[i][j] == 0) continue;
			ans = 1;
		}
		if (ans == 0) break;
	}
	
	if (ans == 1) {
		for(i=0;i<3;i++) {
			ans = 0;
			for(j=0;j<3;j++) {
				if (a[j][i] == 0) continue;
				ans = 1;
			}
			if (ans == 0) break;
		}
	}
	
	if ((a[0][0] == 0) && (a[1][1] == 0) && (a[2][2] == 0)) ans = 0;
	if ((a[2][0] == 0) && (a[1][1] == 0) && (a[0][2] == 0)) ans = 0;
	
	if (ans == 1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

}

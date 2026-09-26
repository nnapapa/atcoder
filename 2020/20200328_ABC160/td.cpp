#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff

int main() {
	int	a,b,c,i,j,k,n,m,x,y,ans1 , ans = 0;
	string	str;

	cin >> n >> x >> y;

	vector< vector<int> > aa(n+1, vector<int>(n+1));
	for(i=1;i<=n-1;i++) {
		for(j=i+1;j<=n;j++) {
			aa[i][j] = j - i;
			if ((i<=x) && (y<=j)) {
				aa[i][j] = j - i - (y-x) + 1;
			} else if ((x<=i) && (y<=j)) {
				aa[i][j] = min( aa[i][j] , (i-x+1+(j-y)) );
			} else if ((x<=i) && (j<=y)) {
				aa[i][j] = min( aa[i][j] , (i-x+1+(y-j)) );
			} else if ((i<=x) && (j<=y)) {
				aa[i][j] = min( aa[i][j] , (x-i+1+(y-j)) );
			}
		}
	}
/*
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			cout << aa[i][j] << " ";
		}
		cout << endl;
	}
*/
	vector<int> an(n+1);
	for(i=1;i<=n-1;i++) {
		for(j=i+1;j<=n;j++) {
			 an[aa[i][j]]++;
		}
	}
	for(i=1;i<n;i++) {
		cout << an[i] << endl;
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int		h,a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> h >> n;
	for(i=0;i<n;i++) {
		cin >> j;
		ans += j;
	}

	if (ans >= h) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}

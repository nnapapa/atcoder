#include <bits/stdc++.h>
using namespace std;

int main() {
	int		h,a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n;
	
	str = "APPROVED";
	for(i=0;i<n;i++) {
		cin >> a;
		if ((a & 1) == 0) {
			if ( (( a % 3 ) != 0 ) && (( a % 5 ) != 0 ) ) {
				str = "DENIED";
			}
		}
	}
	cout << str << endl;

}

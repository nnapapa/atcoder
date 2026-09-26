#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a[3],b,h,c,i,j,k,n,m,x,y,ans = 0;
	string	s,t,u;

	cin >> a[0] >> a[1] >> a[2];
	
	sort(a,a+3);
	
	if ((a[0] == a[1]) && ( a[1] != a[2])) {
		ans = 1;
	}

	if ((a[2] == a[1]) && ( a[1] != a[0])) {
		ans = 1;
	}
	
	if (ans == 1) printf("Yes\n");
	else printf("No\n");

}

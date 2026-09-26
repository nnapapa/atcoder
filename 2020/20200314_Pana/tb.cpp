#include <bits/stdc++.h>
using namespace std;

int main() {
	long long	a,b,c,i,j,k,n,m,x,y,h,w;
	long long  ans = 1;
	string	str;
	
	cin >> h >> w;
	
	if ( ( h > 1 ) && ( w > 1 ) ) {
		ans  = ((w+1)/2) * ((h+1)/2);
		ans += (w/2) * (h/2);
	}
	cout << ans << endl;


}

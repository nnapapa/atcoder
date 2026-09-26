#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> n >> k;

	while ( n > 0 ) {
		n = n / k;
		ans++;
	}
	cout << ans << endl;


}

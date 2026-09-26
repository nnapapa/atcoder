#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		a,b,c,i,j,k,n,m,x,y,ans = 0;
	
	
	cin >> n >> a >> b;
	
	c = n / (a + b);
	i = n % (a + b);
	
	if ( i >= a  ) {
		ans = c * a + a;
	} else {
		ans = c * a + i;
	}
	
	cout << ans << endl;


}

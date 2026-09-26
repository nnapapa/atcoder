#include <bits/stdc++.h>
using namespace std;

int main() {
	int		s,a,b,c,j,k,n,m,x[3],y,ans = 0;
	string	str;
	
	cin >> a >> b;
	
	ans = -1;
	for(float i = 1;i < 2000; i++) {
		if ( ( (int)(i * 0.08) == a) && ( (int)(i * 0.1) == b) ) {
			ans = (int)i;
			break;
		}
	}

	cout << ans << endl;


}

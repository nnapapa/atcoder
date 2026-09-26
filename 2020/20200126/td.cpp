#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		h,a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;
	
	cin >> h;
	
	if (h==1) {
		cout << 1 << endl;
		return 0;
	}
	c = 1;
	while(1) {
		ans += c;
		c = c*2;
		h = h/2;
		if (h==1) {
			ans += c;
			break;
		}
		
	}
	cout << ans << endl;


}

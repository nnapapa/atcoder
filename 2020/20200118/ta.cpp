#include <bits/stdc++.h>
using namespace std;

int main() {
	int		a,b,c,i,j,k,n,m,x,y,h,w,ans = 0;
	string	str;
	
	cin >> h >> w >> n;
	
	
	if (h > w) {
		ans = n / h;
		if (n%h) ans++;
	} else {
		ans = n / w;
		if (n%w) ans++;
	}

	cout << ans << endl;


}

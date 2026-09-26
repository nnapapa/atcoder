#include <bits/stdc++.h>
using namespace std;

int main() {
	long long		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	
	cin >> a >> b >> k;
	
	
	if (a > k) {
		a -= k;
	} else {
		b = b + a - k;
		a = 0;
	}
	if (b < 0) b = 0;
	

	cout << a << ' ' << b << endl;
	

}

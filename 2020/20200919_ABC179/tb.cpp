#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	a = 0;
	for(i=0;i<n;i++) {
		cin >> b >> c;
		if (b == c) {
			a++;
		} else {
			ans = max(ans , a);
			a = 0;
		}
	}
	ans = max(ans , a);
	if (ans >= 3) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	
	for(a=1;a<n;a++) {
		b = (n-1) / a;
		ans += b;
	}
	
	cout << ans << endl;
	return 0;
}

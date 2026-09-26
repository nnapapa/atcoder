//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n >> d;
	for(i=0;i<n;i++) {
		cin >> x >> y;
		a = x*x + y*y;
		if (a <= d*d) ans++;
	}
	
	cout << ans << endl;
	return 0;
}

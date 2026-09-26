//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	double  A,B,C;
	cin >> x;
	a = 100;
	while(1) {
		ans ++;
		b = a/100;
		if (a+b >= x) break;
		a += b;

	}
	cout << ans << endl;

}

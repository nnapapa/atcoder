//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> a >> b >> n;

	if (b>n) {
		ans = a*n/b;
	} else {
		ans = a*(b-1)/b;
	}
	cout << ans << endl;

}

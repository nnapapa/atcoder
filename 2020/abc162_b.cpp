//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;

	cin >> n;

	for(i=1;i<=n;i++) {
		if (i%3!=0 && i%5!=0) ans += i;
	}
	cout << ans << endl;
	return 0;
}

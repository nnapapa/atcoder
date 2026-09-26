//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	string	str;

	cin >> n >> k;
	for(i=k;i<=n+1; i++) {
		x = (i-1)*i/2;
		y = (n + (n-i+1))*i/2;
		ans += y-x+1;
		ans = ans % 1000000007;
		//cout << i << ' ' << ans << endl;
	}
	//cout << endl;
	cout << ans << endl;

}

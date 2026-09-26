//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s,ss;

	cin >> a >> b >> x;

	ans = b / x - a / x;
	if(a % x == 0) {
		ans++;
	}

	cout << ans << endl;

}

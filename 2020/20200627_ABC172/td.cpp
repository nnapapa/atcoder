//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;

	for(i=1;i<=n;i++) {

		ans += (n-(n%i)+i)*(n/i)/2;
	}

	cout << ans << endl;
	return 0;
}

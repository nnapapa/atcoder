//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y;
	double  ans = 0;
	string	s;

	cin >> n;

	for(i=1;i<=n; i++) {
		ans += i;
	}
	ans = ans * 10000 / n;

	printf("%f\n",ans);

}

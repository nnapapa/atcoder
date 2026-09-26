//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;

	n = n % 10;
	if (n == 3) {
		s = "bon";
	} else if ( n<=1 || n == 6 || n == 8) {
		s = "pon";
	} else {
		s = "hon";
	}

	cout << s << endl;
	return 0;
}

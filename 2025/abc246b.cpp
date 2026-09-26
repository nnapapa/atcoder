#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b;
	ll		ans = 0;
	string	s;
	cin >> a >> b;
	double n = atan2(b,a);
	double x = sin(n);
	double y = cos(n);
	printf("%.10f %.10f\n",y , x);
	return 0;
}

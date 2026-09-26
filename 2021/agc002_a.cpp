#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Negative";
	cin >> a >> b;
	if (a<=0 && b>=0) s = "Zero";
	else if ( a > 0) s = "Positive";
	else if ((b - a)%2) s = "Positive";

	cout << s << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> k;
	while(k) {
		if (k&1) s += '2';
		else s += '0';
		k = k >> 1;
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
	return 0;
}

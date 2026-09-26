#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	a = 1;
	while(n>ans) ans += a++;
	b = ans - n;
	for(i=1;i<a;i++) {
		if (i!=b) cout << i << endl;
	}
	return 0;
}

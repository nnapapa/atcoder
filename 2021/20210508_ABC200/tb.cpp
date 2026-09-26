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
	string	s;
	cin >> n >> k;

	for(i=0;i<k;i++) {
		if (n%200==0) n /= 200;
		else n = n * 1000 + 200;
	}
	cout << n << endl;
	return 0;
}

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
	cin >> n;

	for(i=1;i<=999999;i++) {
		k = 0;
		x = i;
		while(x>0) {k++; x/=10;}
		j = 1;
		while(k>0) {k--; j*=10;}
		if (i+(i*j)<=n) ans++;
	}

	cout << ans << endl;
	return 0;
}

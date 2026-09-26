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
	cin >> n;
	for(i=1;i*i*i<=n;i++) {
		for(j=i;i*j*j<=n;j++) {
			//printf("i j n/(i*j) = %d %d %d\n",i,j,n/(i*j));
			ans += n / (i*j) - j + 1;
		}
	}

	cout << ans << endl;
	return 0;
}

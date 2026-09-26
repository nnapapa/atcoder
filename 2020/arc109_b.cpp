#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	cin >> n;
	while(ans*(ans+1)/2<=n+1) ans++;
	ans = n - --ans + 1;

	cout << ans << endl;
	return 0;
}

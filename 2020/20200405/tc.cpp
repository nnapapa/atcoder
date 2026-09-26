#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll	long long

int main() {
	ll		c,i,j,k,kk,n,m,x,y,ans = 0;

	cin >> n >> k;
	ans = n % k;
	ans = min(ans , k-ans);

	cout << ans << endl;


}

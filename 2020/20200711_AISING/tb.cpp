//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	a(n+1);
	for(i=1;i<=n;i++) cin >> a[i];
	for(i=1;i<=n;i++) {
		if ((i%2==1)&&(a[i]%2==1)) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,r,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> l >> r >> d;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	for(i=l;i<=r;i++) {
		if (i%d == 0) ans++;
	}
	cout << ans << endl;
	return 0;
}

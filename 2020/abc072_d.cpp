//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	p(n+1);
	for(i=1;i<=n;i++) cin >> p[i];
	
	for(i=1;i<=n;i++) {
		if (p[i]!=i) continue;
		if (i+1<=n && p[i]!=i+1) {
			swap(p[i],p[i+1]);
		} else {
			swap(p[i],p[i-1]);
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}

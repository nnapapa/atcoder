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
	vector<ll>	aa(n);
	map<ll>		p;
	for(i=0;i<n;i++) {
		cin >> aa[i];
		p[aa[i]]++;
	}

	for(i=0;i<n;i++) {
		
	}
	for(i=n-1;i>=0;i--) {
		c = 1;
		for(j=0;j<i;j++) if (aa[i]%aa[j] == 0) c = 0;
		ans += c;
	}
	if (aa[0]==aa[1]) ans--;
	cout << ans << endl;
	return 0;
}

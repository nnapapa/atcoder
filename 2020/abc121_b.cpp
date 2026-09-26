//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> m >> c;
	vector<int> b(m);
	for(i=0;i<m;i++) {
		cin >> b[i];
	}
	for(j=0;j<n;j++) {
		x = 0;
		for(i=0;i<m;i++) {
			cin >> a;
			x += a*b[i];
		}
		if (x + c > 0) ans++;
	}

	cout << ans << endl;
	return 0;
}

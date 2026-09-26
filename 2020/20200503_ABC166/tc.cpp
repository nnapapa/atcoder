//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> m;
	vector<ll>	h(n+1),hh(n+1);

	for(i=1;i<=n;i++) {
		cin >> h[i];
		hh[i] = h[i];
	}

	for(i=0;i<m;i++) {
		cin >> a >> b;
		hh[a] = max(hh[a], h[b] );
		hh[b] = max(hh[b], h[a] );
		if (h[a]==h[b]) hh[a] = hh[b] = INF;
	}
	for(i=1;i<=n;i++) {
		if (hh[i] == h[i]) ans++;
	}
/*
	for(i=1;i<=n;i++) {
		cout << hh[i] << ' ';
	}
	cout << endl;
*/
	cout << ans << endl;

}

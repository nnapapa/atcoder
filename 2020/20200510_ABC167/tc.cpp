//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll maxbit(ll i) {
	for(int j=0x8000; j>0; j=j>>1) {
		if (j & i) return j;
	}
	return 0;
}
ll index(ll x) {
	ll ret = 0;
	while(x) {
		ret++;
		x = x >> 1;
	}
	return ret;
}
int main() {
	ll		b,i,j,k,n,m,x,y,xx,ans = 0;
	string	s;

	cin >> n >> m >> x;
	vector<ll> c(n+1);
	vector<vector<ll>> a(n+1 , vector<ll>(m+1) );
	for(i=1;i<=n;i++) {
		cin >> c[i];
		for(j=1;j<=m;j++) {
			cin >> a[i][j];
		}
	}
	b = 1 << n;

	vector<vector<ll>>	dp2(b , vector<ll>(m+1, INFL));
	for(j=1;j<=m;j++) {
		dp2[0][j] = 0;
	}
	for(i=1;i<b;i++) {
		for(j=1;j<=m;j++) {
			xx = maxbit(i);
			y = index(xx);
			dp2[i][j] = dp2[i & ~xx][j] + a[y][j];
		}
	}
	ans = INFL;
	for(i=1;i<b;i++) {
		int f = 1;
		for(j=1;j<=m;j++) {
			if (dp2[i][j]<x) f = 0;
		}
		//cout << "DBG : " << i << ' ' << f << endl;
		if (f) {
			ll ii = i;
			ll tmp = 0;
			ll x = 1;
			while(ii) {
				if (ii & 1) tmp+=c[x];
				ii = ii >> 1;
				x++;
			}
			ans = min(ans , tmp);
			//cout << "DBG :: " << ans << ' ' << tmp << endl;
		}
	}
	/*
	for(i=0;i<b;i++) {
		cout << "DBG ";
		for(j=1;j<=m;j++) cout << dp2[i][j] << ' ';
		cout << endl;
	}*/
	if (ans == INFL) ans = -1;
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll		ans = INFL;
vector<vector<ll>> dist(300,vector<ll>(300,INFL));
vector<ll>	rr(8);

void dfs(ll r , ll ok , ll c , ll d) {
	//cout << "dfs " << r << " " << ok << " " << c << " " << d << endl;
	if (ok==(1<<r)-1) {
		ans = min(ans , d);
		return;
	}
	for(ll i=0; i<r; i++) {
		if (ok==0) dfs(r , ok|(1<<i) , i , 0);
		else if ( (ok & (1<<i)) == 0) dfs(r , ok|(1<<i) , i , d+dist[rr[c]][rr[i]]);
	}
}
int main() {
	ll		a,b,c,d,h,i,r,j,k,l,m,n,v,w,x,y,z;

	string	s;
	cin >> n >> m >> r;

	for(i=0;i<r;i++) cin >> rr[i];
	map<ll,map<ll,ll>> abc;
	for(i=0;i<m;i++) {
		cin >> a >> b >> c;
		abc[a][b] = c;
		abc[b][a] = c;
		dist[a][b] = c;
		dist[b][a] = c;
	}

	for(i=1;i<=n;i++) dist[i][i] = 0;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
	/*
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	*/

	dfs(r , 0 , 0 , 0);

	cout << ans << endl;
	return 0;
}

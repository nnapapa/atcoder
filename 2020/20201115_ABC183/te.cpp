#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
#define MOD 1000000007

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	vector<string>	grid(h);
	for(i=0;i<h;i++) cin >> grid[i];

	vector<vector<ll>> kumi(h,vector<ll>(w,0));
	queue<pair<ll,ll>> q;
	q.push(make_pair(0,0));
	while(!q.empty()) {
		tie(x,y) = q.front();
		q.pop();
		ll xx = x+1;
		while(xx<w && grid[xx][y]=='.') { q.push(make_pair(xx,y)); kumi[xx][y] += kumi[x][y]; kumi[xx++][y] %= MOD;}
		ll yy = y+1;
		while(yy<h && grid[x][yy]=='.') { q.push(make_pair(x,yy)); kumi[x][yy] += kumi[x][y]; kumi[x][yy++] %= MOD;}
		xx = x+1;
		yy = y+1;
		while(yy<h && xx<w && grid[xx][yy]=='.') { q.push(make_pair(xx,yy)); kumi[xx][yy] += kumi[x][y]; kumi[xx++][yy++] %= MOD;}
	}

	cout << kumi[h-1][w-1] << endl;
	return 0;
}

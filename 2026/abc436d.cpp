#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	cin >> h >> w;
	vector<string>	s(h);
	for(i=0;i<h;i++) cin >> s[i];
	map<ll,vector<pair<ll,ll>>> mp;
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		if (s[i][j]>='a' && s[i][j]<='z') mp[s[i][j]].push_back(make_pair(i,j));
	}
	vector<vector<ll>> D(4,vector<ll>(2));
	D = { {1,0} , {0,1} , {-1,0} , {0,-1}};
	vector<vector<ll>> A(h,vector<ll>(w,0));
	queue<vector<ll>> que;
	que.push({0,0});
	A[0][0] = 1;
	while(que.size()) {
		y = que.front()[0];
		x = que.front()[1];
		//cout << "Y:" << y << " X:" << x << endl;
		que.pop();
		a = A[y][x];
		if (mp.count(s[y][x])) {
			for(auto p : mp[s[y][x]]) {
				i = p.first;
				j = p.second;
				if (y==i && x==j) continue;
				if (A[i][j]) continue;
				A[i][j] = a + 1;
				que.push({i,j});
			}
			mp.erase(s[y][x]);
		}
		for(i=0;i<4;i++) {
			ll Y = y + D[i][0];
			ll X = x + D[i][1];
			if ((Y<0)||(Y>=h)||(X<0)||(X>=w)) continue;
			if (A[Y][X]) continue;
			if (s[Y][X]=='#') continue;
			A[Y][X] = a + 1;
			que.push({Y,X});
		}
	}
	/* for(i=0;i<h;i++) {
		for(j=0;j<w;j++) cout << A[i][j] << " ";
		cout << endl;
	}*/
	cout << A[h-1][w-1]-1 << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> h >> w;
	vector<vector<ll>> C(h+1,vector<ll>(w+1,-1));
	for(i=0;i<h;i++) {
		cin >> s;
		for(j=0;j<w;j++) {
			if (s[j]=='.') C[i][j]=0;
		}
	}	
	queue<pair<ll,ll>> que;
	que.push(make_pair(0,0));
	C[0][0] = 1;
	while(que.size()) {
		auto p = que.front();
		que.pop();
		i = p.first; j = p.second;
		if (C[i+1][j]==0) {
			C[i+1][j] = C[i][j]+1;
			ans = max(ans,C[i+1][j]);
			que.push(make_pair(i+1,j));
		}
		if (C[i][j+1]==0) {
			C[i][j+1] = C[i][j]+1;
			ans = max(ans,C[i][j+1]);
			que.push(make_pair(i,j+1));
		}
	}
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL


int main() {
	ll		a,b,c,d,i,j,k,l,m,n,t,r,u,v,x,y,z,h,w;
	ll		ans = 0;
	vector<vector<ll>> D = { {0,1}, {1,0}, {0,-1}, {-1,0} };
	queue<pair<ll,ll>> q;
	cin >> h >> w;
	vector<string>	S(h);
	vector<vector<ll>> H(h,vector<ll>(w,0));

	for(i=0;i<h;i++) cin >> S[i];
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			if (S[i][j]=='.' && H[i][j] == 0) {
				H[i][j] = 1;
				q.push(make_pair(i,j));
				a = 1;
				while(q.size()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();
					if (y==0 || y==h-1 || x==0 || x==w-1) a = 0;
					for(k=0;k<4;k++) {
						l = y + D[k][0];
						m = x + D[k][1];
						if (l<0 || l>=h || m <0 || m>=w) continue;
						if (S[l][m]=='.' && H[l][m]==0) {
							H[l][m] = 1;
							q.push(make_pair(l,m));
						}
					}
				}
				ans += a;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

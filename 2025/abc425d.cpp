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
	vector<pair<ll,ll>> di = { {0,1} , {1,0} , {0,-1} , {-1,0} };
	cin >> h >> w;
	vector<string>	S(h);
	for(i=0;i<h;i++) cin >> S[i];
	queue<pair<ll,ll>> que,nxt;
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) if (S[i][j]=='#') que.push(make_pair(i,j));
	}
	ans = que.size();
	while(1) {
		if (que.size()) {
			tie(x,y) = que.front();
			que.pop();
			for(i=0;i<4;i++) {
				ll xx = x + di[i].first;
				ll yy = y + di[i].second;
				ll x1,y1;
				t = 0;
				if (xx<0 || xx>=h || yy<0 || yy>=w) continue;
				if (S[xx][yy]=='#') continue;
				for(j=0;j<4;j++) {
					x1 = xx + di[j].first;
					y1 = yy + di[j].second;
					if (x1>=0 && x1<h && y1>=0 && y1<w) 
						if (S[x1][y1]=='#') t++;
				}
				//printf("x y  xx yy  t  %d %d  %d %d  %d\n",x,y,xx,yy,t);
				if (t==1) {
					nxt.push(make_pair(xx,yy));
				}
			}
		} else {
			//printf("nxt.size %d\n",nxt.size());
			ans += nxt.size();
			while(nxt.size()) {
				tie(x,y) = nxt.front();
				S[x][y] = '#';
				que.push(nxt.front());
				nxt.pop();
			}
			if (que.size()==0) break;
		}
	}
	cout << ans << endl;
	return 0;
}

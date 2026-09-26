#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll>		memo(10,INFL);
vector<vector<ll>>	ch(10,vector<ll>(10));
void calc(ll start,ll cur,ll b,ll tot) {
	//cout << start << ' ' << cur << ' ' << b << ' ' << tot << endl;
	if (cur==1) {
		memo[start] = min(memo[start] , tot);
		//cout << memo[start] << endl;
		return;
	}
	for(ll t=0;t<10;t++) {
		if (b & (1<<t)) continue;
		if (tot+ch[cur][t]<memo[start]) calc(start,t,b|(1<<t),tot+ch[cur][t]);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;

	vector<ll>	cnt(10,0);
	for(i=0;i<10;i++) for(j=0;j<10;j++) {
		cin >> ch[i][j];
	}
	for(i=0;i<h;i++) for(j=0;j<w;j++) {
		cin >> a;
		if (a>=0) cnt[a]++;
	}

	for(i=0;i<10;i++) {
		if (i==1) continue;
		if (cnt[i]>0) {
			calc(i,i,1<<i,0);
			ans += memo[i]*cnt[i];
		}
	}

	cout << ans << endl;
	return 0;
}

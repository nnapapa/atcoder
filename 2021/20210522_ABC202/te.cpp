#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll> IN(200005,0),OUT(200005,0);
vector<vector<ll>> P(200005), D(200005);
ll in , cnt;
void calcD(ll t) {
	IN[t] = in++;
	D[cnt++].push_back(t);
	for(ll i=0;i<P[t].size();i++) {
		calcD(P[t][i]);
	}
	OUT[t] = in++;
	cnt--;
}
bool isOK(ll index , ll key,ll d) {
	if (D[d][index] >= key) return true;
	else return false;
}
int main() {
	ll		a,b,c,d,u,h,i,j,k,l,m,n,v,w,x,y,z,q;
	ll		ans = 0;
	in = cnt = 0;
	string	s;
	cin >> n;
	for(i=2;i<=n;i++) {
		cin >> a;
		P[a].push_back(i);
	}
	calcD(1);

	cin >> q;
	for(i=0;i<q;i++) {
		cin >> u >> d;
		ll left = 0;
        ll right = 200000;

		while (right - left > 1) {
    		ll mid = (left + right) / 2;
        	if (isOK(mid, IN[d],u)) right = mid;
        	else left = mid;
    	}
		/* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
		ans = left;

		left = 0;
        right = 200000;

		while (right - left > 1) {
    		ll mid = (left + right) / 2;
        	if (isOK(mid, OUT[u], d)) right = mid;
        	else left = mid;
    	}
		/* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
		ans = left - ans;
		
	}

	cout << ans << endl;
	return 0;
}

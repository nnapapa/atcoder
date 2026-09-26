#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,q,r;
	string	s;
	cin >> n >> m >> q;
	vector<ll>	W(n),V(n),X(m),VV(n),XX(m),ans(q,0);
	vector<pair<ll,ll>> P(n),PP(n);
	for(i=0;i<n;i++) {
		cin >> W[i] >> V[i];
		P[i] = make_pair(V[i],W[i]);
	}
	sort(P.begin(),P.end());
	reverse(P.begin(),P.end());

	for(i=0;i<m;i++) cin >> X[i];

	for(z=0;z<q;z++) {
		cin >> l >> r;
		XX = X;
		//PP = P;
		for(i=l-1;i<r;i++) XX[i] = 0;
		sort(XX.begin(),XX.end());
		for(i=0;i<n;i++) {
			w = P[i].second;
			v = P[i].first;
			for(j=0;j<m;j++) {
				if (XX[j]>=w) {
					ans[z]+=v;
					XX[j] = 0;
					break;
				}
			}
		}

	}

	for(z=0;z<q;z++) cout << ans[z] << endl;
	return 0;
}

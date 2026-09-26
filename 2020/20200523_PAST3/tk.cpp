//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,q,i,j,k,n,m,f,t,x,y;
	string	s;
	cin >> n >> q;
	vector<ll>		table(n+1),tabletop(n+1),conup(n+1),condown(n+1),contable(n+1),ans(n+1);
	for(i=1;i<=n;i++) {
		table[i] = i;
		tabletop[i] = i;
		contable[i] = i;
	}
	for(i=0;i<q;i++) {
		cin >> f >> t >> x;
		//コンテナ外し
		int newtop = tabletop[f];
		if (table[f]==x) {
			table[f] = tabletop[f] = 0;
		} else {
			tabletop[f] = condown[x];
		}
		//コンテナ乗せる
		if (table[t]==0) {
			table[t] = x;
			tabletop[t] = newtop;
			condown[x] = 0;
			contable[x] = t;
		} else {
			conup[tabletop[t]] = x;
			condown[x] = tabletop[t];
			tabletop[t] = newtop;
		}
	}

	for(i=1;i<=n;i++) {
		if (table[i]==0) continue;
		int con = table[i];
		int conend = tabletop[i];
		ans[con] = i;
		while(con!=conend) {
			con = conup[con];
			ans[con] = i;
		}
	}

	for(i=1;i<=n;i++)	cout << ans[i] << endl;
	return 0;
}

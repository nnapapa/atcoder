#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	x(m),y(m),rd(n+1,0),wt(n+1,0),mx(n+1);
	for(i=0;i<m;i++) cin >> x[i] >> y[i];
	for(i=1;i<=n;i++) mx[i] = 1;
	rd[1] = 1;
	for(i=2;i<=n;i++) wt[i] = 1;
	for(i=0;i<m;i++) {
		mx[x[i]]--;
		mx[y[i]]++;
		rd[y[i]] |= rd[x[i]];
		wt[y[i]] |= wt[x[i]];
		if (mx[x[i]]==0) rd[x[i]] = wt[x[i]] = 0;
	}
	for(i=1;i<=n;i++) if (rd[i]) ans++;

	cout << ans << endl;
	return 0;
}

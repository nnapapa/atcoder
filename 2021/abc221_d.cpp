#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	map<ll,ll> ab;
	cin >> n;
	vector<ll>		ans(n+1,0);
	for(i=0;i<n;i++) {
		cin >> a >> b;
		ab[a]++;
		ab[a+b]--;
	}
	i = 1;
	x = 0;
	for(auto p : ab) {
		ans[x] += p.first - i;
		x += p.second;
		i = p.first;
	}

	for(i=1;i<=n;i++) cout << ans[i] << " ";
	cout << endl;
	return 0;
}

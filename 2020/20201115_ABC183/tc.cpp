#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll		n,k,ans = 0;
vector<vector<ll>>	t(8 , vector<ll>(8,INFL));

void calc(int bit, int st, int tot) {
	if (bit==(1<<n)-1) {
		if (tot + t[st][0] == k) ans++;
		// return;
	}
	for(ll i=1;i<n;i++) {
		ll x = 1<<i;
		if ((bit&x) == 0) calc(bit|x, i , tot+t[st][i]);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,l,m,v,w,x,y,z;

	cin >> n >> k;
	for(i=0;i<n;i++) for(j=0;j<n;j++) cin >> t[i][j];

	calc(1,0,0);

	cout << ans << endl;
	return 0;
}

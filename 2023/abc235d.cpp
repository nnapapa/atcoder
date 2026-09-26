#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n ‚ÌÅ‰ºˆÊbit‚ª 1 ‚È‚ç‚Î x^(2^i) ‚ð‚©‚¯‚é
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}

ll keta(ll x) {
	ll sft = 0;
	while(x > 0) {
		sft++;
		x /= 10;
	}
	return sft;
}
ll calc(ll x) {
	if (x < 10 || x % 10 == 0) return 0;
	return x / 10 + ((x%10) * pow(10,keta(x)-1));
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> a >> n;
	vector<ll> bfs(pow(10,keta(n)),0);
	queue<ll> que;
	que.push(1);
	x = keta(n);
	while(que.size()) {
		ans = que.front(); que.pop();
		if (ans==n) break;
		b = ans * a;
		c = calc(ans);
		if (b < bfs.size() && bfs[b]==0) {
			bfs[b]=bfs[ans]+1; que.push(b);
		}
		if (c && bfs[c]==0) {
			bfs[c]=bfs[ans]+1; que.push(c);
		}
	}
	//printf("%d %d\n" , keta(n), calc(n));
	if (ans==n) cout << bfs[ans] << endl;
	else cout << -1 << endl;
	return 0;
}

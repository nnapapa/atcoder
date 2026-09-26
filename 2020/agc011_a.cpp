#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,ti,ai;
	ll		ans = 0;
	string	s;
	cin >> n >> c >> k;
	vector<ll>	t(n),a(n);
	for(i=0;i<n;i++) cin >> t[i];
	sort(t.begin(),t.end());
	for(i=0;i<n;i++) a[i] = t[i] + k;
	w = 0;	//待っている人数
	ti = 0;	//tのindex 最初に待っている人
	ai = a[0];	//最初に怒り出す人の時間

	for(i=0;i<n;i++) {
		b = t[i];
		w++;
		if (b > ai) {
			ti = i;
			ai = a[i];
			w = 1;
			ans++;
		} else if (w==c) {
			ti = i+1;
			ai = a[i+1];
			w = 0;
			ans++;
		}
	}
	if (w>0) ans++;
	cout << ans << endl;
	return 0;
}

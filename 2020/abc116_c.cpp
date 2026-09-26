#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	h(n);
	for(i=0;i<n;i++) cin >> h[i];
	while(1) {
		bool f = false , f0 = false;
		for(i=0;i<n;i++) {
			if (f && h[i]<=0) f = false;
			if (!f && h[i]>0) f = f0 = true, ans++;
		}
		if (!f0) break;
		for(i=0;i<n;i++) h[i]--;
	}

	cout << ans << endl;
	return 0;
}

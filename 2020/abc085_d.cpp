#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> h;
	vector<ll>	aa(n),bb(n);
	for(i=0;i<n;i++) cin >> aa[i] >> bb[i];
	sort(aa.begin(),aa.end());
	sort(bb.begin(),bb.end());
	reverse(aa.begin(),aa.end());
	reverse(bb.begin(),bb.end());
	a = b = x = 0;
	while(x<h) {
		if (aa[a]>=bb[b]) {
			i = (h-x + aa[a]-1) / aa[a];
			x += aa[a]*i;
			ans += i;
		} else {
			x += bb[b];
			ans++;
			bb[b] = 0;
			if (b<n-1) b++;
		}
	}

	cout << ans << endl;
	return 0;
}

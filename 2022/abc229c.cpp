#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> w;
	vector<pair<ll,ll>> AB(n);
	for(i=0;i<n;i++) {
		cin >> AB[i].first >> AB[i].second;
	}
	sort(AB.begin(),AB.end());
	reverse(AB.begin(),AB.end());

	a = 0;
	for(i=0;i<n;i++) {
		if (w<=a) break;
		if (w-a >= AB[i].second) {
			a += AB[i].second;
			ans += AB[i].first * AB[i].second;
		} else {
			ans += AB[i].first * (w-a);
			a += w-a;
		}
		//cout << ans << " " << a << endl;
	}

	cout << ans << endl;
	return 0;
}

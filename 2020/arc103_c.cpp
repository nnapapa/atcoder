#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<pair<ll,ll>>	aa( 100001 , make_pair(0,0) ), bb(100001 , make_pair(0,0) );

	for(i=0;i<n;i+=2){
		cin >> a >> b;
		aa[a].first++;
		bb[b].first++;
		aa[a].second = a;
		bb[b].second = b;
	}
	sort(aa.begin(),aa.end());
	sort(bb.begin(),bb.end());
	ans = n - (aa[100000].first + bb[100000].first);
	if (ans==0 && a==b) ans = n / 2;
	else {
		if (aa[100000].second == bb[100000].second) {
			c = max(aa[100000].first + bb[99999].first ,
			        aa[99999].first + bb[100000].first);
			ans = n - c;

		}
	}
	cout << ans << endl;
	return 0;
}

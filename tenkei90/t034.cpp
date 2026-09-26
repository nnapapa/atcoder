#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,r,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	l = r = 0;
	a = 1;
	map<ll,ll> mp;
	mp[A[0]] = 1;
	while(1) {
		//cout << l << " " << r << endl;
		ans = max(ans , r - l + 1);
		r++;
		if (r==n) break;
		mp[A[r]]++;
		if (mp[A[r]]==1) {
			a++;
			while(a>k) {
				l++;
				mp[A[l-1]]--;
				if (mp[A[l-1]]==0) a--;
			}
		
		}
	}

	cout << ans << endl;
	return 0;
}

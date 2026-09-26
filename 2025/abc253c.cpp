#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		mn = INFL, mx = -1;
	cin >> n;
	map<ll,ll>	mp;
	set<ll> S;
	for(i=0;i<n;i++) {
		
		cin >> a;
		if (a==1) {
			cin >> x;
			mp[x] += 1;
			S.insert(x);
		} else if (a==2) {
			cin >> x >> c;
			if (mp[x]>c) {
				mp[x] -= c;
			} else {
				S.erase(x);
				mp.erase(x);
			}
		} else {
			cout << *rbegin(S) - *begin(S) << endl;
		}
	}
	
	return 0;
}

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
	string	s;
	cin >> n;
	map<ll , vector<ll>> mp;
	for(i=0;i<n;i++) {
		cin >> a;
		mp[a].push_back(i);
	}
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> l >> r >> x;
		l--;
		r--;
		if (mp[x].size()==0) {
			cout << "0\n";
			continue;
		}
		ll ng = -1; //「index = 0」が条件を満たさないこともあるので、初期値は -1
		ll ok = (ll)mp[x].size(); // 「index = a.size()-1」が条件を満たすこともあるので、初期値は a.size()
		while (ok - ng > 1) {
			ll mid = (ng + ok) / 2;
			bool flg = false;         // またはfalse
			//ここにmidに対するチェック論理を書く midがokならflg=true
			if (mp[x][mid]>=l) flg = true;
			if (flg) ok = mid;
			else ng = mid;
		}
		a = ok;
		ok = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
		ng = (ll)mp[x].size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
		while (ng - ok > 1) {
			ll mid = (ok + ng) / 2;
			bool flg = false;         // またはfalse
			//ここにmidに対するチェック論理を書く midがokならflg=true
			if (mp[x][mid]<=r) flg = true;
			if (flg) ok = mid;
			else ng = mid;
		}
		b = ok;
		//cout << a << " " << b << " ";
		cout << b - a + 1 << endl;
	}
	return 0;
}

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
	cin >> n >> a >> b >> s;
	vector<ll> A(n+1,0),B(n+1,0);
	ll a1 = 0, b1 = 0;
	for(i=0;i<n;i++) {
		if (s[i]=='a') a1++;
		else b1++;
		A[i] = a1;
		B[i] = b1;
	}
	//for(i=0;i<n;i++) cout << A[i] << ' ';
	//cout << endl;
	//for(i=0;i<n;i++) cout << B[i] << ' ';
	//cout << endl;
	for(i=0;i<n;i++) {
		// 左側からok、どこかから右側がng
		// whileを抜けた後、okの最大値がok、ngの最小値がng
		ll ok = i-1; //「index = 0」が条件を満たすこともあるので、初期値は -1
		ll ng = n; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
		while (ng - ok > 1) {
			ll mid = (ok + ng) / 2;
			bool flg = false;         // またはfalse
			//ここにmidに対するチェック論理を書く midがokならflg=true
			c = A[mid]-A[i];
			if (s[i]=='a') c++;
			if (a > c) flg = true;
			if (flg) ok = mid;
			else ng = mid;
		}
		l = ng;
		ok = i-1; //「index = 0」が条件を満たすこともあるので、初期値は -1
		ng = n; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
		while (ng - ok > 1) {
			ll mid = (ok + ng) / 2;
			bool flg = false;         // またはfalse
			//ここにmidに対するチェック論理を書く midがokならflg=true
			c = B[mid]-B[i];
			if (s[i]=='b') c++;
			if (b > c) flg = true;
			if (flg) ok = mid;
			else ng = mid;
		}
		r = ok;
		//cout << i << ' ' << l << ' ' << r << endl;
		if (l<=r) {
			ans += r - l + 1;
		}
	}
	cout << ans << endl;
	return 0;
}

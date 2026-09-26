#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	while(q--) {
		cin >> x >> y;
		// 左側からok、どこかから右側がng
		// whileを抜けた後、flg=trueの最大値がok、flg=falseの最小値がng
		ll ok = x; 
		ll ng = INFL; 
		while (ng - ok > 1) {
			ll mid = (ok + ng) / 2;
			//cout << ok << " " << ng << " " << mid << " : ";
			bool flg = false;         // またはtrue
			// midがy番目以下ならflg=true
			a = lower_bound(A.begin(),A.end(),mid) - lower_bound(A.begin(),A.end(),x);
			if (mid - x - a < y) flg = true;
			//cout << a << " : " << mid - x - a << endl;
			if (flg) ok = mid;
			else ng = mid;
		}
		cout << ok << endl;
	}
	return 0;
}

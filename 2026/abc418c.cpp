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
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(), A.end());
	B[0] = A[0];
	for(i=1;i<n;i++) B[i] = B[i-1] + A[i]; 
	while(q--) {
		cin >> b;
		ans = 0;
		ll ng = -1; 
		ll ok = n; 
		while (ok - ng > 1) {
			ll mid = (ng + ok) / 2;
			bool flg = true;         // またはfalse
			//ここにmidに対するチェック論理を書く midがokならflg=true
			if (A[mid]<b) flg = false;
			if (flg) ok = mid;
			else ng = mid;
		}
		//cout << "ng ok = " << ng << " " << ok << endl;
		if (ng>=0) ans = B[ng];
		if (ok<n) ans += (b-1)*(n-ok) + 1;
		else ans = -1;
		cout << ans << endl;
	}
	return 0;
}

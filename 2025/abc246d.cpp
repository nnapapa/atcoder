#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	for(i=0;i<=1000000;i++) {
		ll ng = -1; //「index = 0」が条件を満たさないこともあるので、初期値は -1
		ll ok = 1000000;
		while (ok - ng > 1) {
			ll mid = (ng + ok) / 2;
			bool flg = true;         // またはfalse
			if (i*i*i + i*i*mid + i*mid*mid + mid*mid*mid < n) flg = false;
			if (flg) ok = mid;
			else ng = mid;
		}

		ans = min(ans, i*i*i + i*i*ok + i*ok*ok + ok*ok*ok);
	}
	cout << ans << endl;
	return 0;
}

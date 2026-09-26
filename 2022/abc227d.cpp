#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	cin >> n >> k;
	vector<ll> A(n);
	for(i=0;i<n;i++) cin >> A[i];


	// 左側からok、どこかから右側がng
	// whileを抜けた後、okの最大値がleft、ngの最小値がright
	ll left = 0;
	ll right = 200000000000000001;
	while (right - left > 1) {
		ll mid = (left + right) / 2;
		bool ok = true;         // またはfalse

		lll a = 0;
		for(i=0;i<n;i++) {
			a = a + min(mid,A[i]);
		}
		if (a >= (lll)mid*k) ok = true;
		else ok = false;

		if (!ok) right = mid;
		else left = mid;
	}


	cout << left << endl;
	return 0;
}

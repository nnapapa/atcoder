#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	cin >> n >> l >> k;
	vector<ll>	A(n+1);
	for(i=0;i<n;i++) cin >> A[i];
	A[n] = l;
	ll left = 0;
	ll right = l+1;
	while (right - left > 1) {
		ll mid = (left + right) / 2;
		//cout << mid << " : ";
		bool ok = false;
		a = 0; p = 0;
		for(i=0;i<=n;i++) {
			b = A[i] - p;
			if (b>=mid) {
				//cout << b << " ";
				p = A[i];
				a++;
			}
		}
		if (a>k) ok = true;
		//cout << " " << a << " " << ok << endl;
		if (!ok) right = mid;
		else left = mid;
	}

	cout << left << endl;
	return 0;
}

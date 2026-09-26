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
	vector<ll>	A(n+1,0);
	for(i=1;i<=n;i++) {
		cin >> A[i];
		A[i] += A[i-1];
	}
	/*
	for(i=0;i<=n;i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	*/
	x = 0;
	for(i=0;i<q;i++) {
		cin >> t;
		if (t==1) {
			cin >> c;
			x = (x + c) % n;
		} else {
			cin >> l >> r;
			l = (l - 1 + x) % n;
			r = (r - 1 + x) % n;
			//cout << "xlr= " << x << " " << l << " " << r << endl;
			if (l <= r) {
				cout << A[r+1] - A[l] << endl;
			} else {
				cout << A[n] - A[l] + A[r+1] << endl;
			}
		}
	}

	return 0;
}

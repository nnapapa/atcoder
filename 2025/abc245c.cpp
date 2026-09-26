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
	string	s = "Yes";
	cin >> n >> k;
	vector<ll>	A(n), B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	a = true;
	b = true;
	for(i=1;i<n;i++) {
		ll aa = abs(A[i-1]-A[i]);
		ll ab = abs(A[i-1]-B[i]);
		ll ba = abs(B[i-1]-A[i]);
		ll bb = abs(B[i-1]-B[i]);
		if (a & b) {
			if ((aa>k) && (ba>k)) a = false;
			if ((ab>k) && (bb>k)) b = false;
		} else if (a) {
			if (aa>k) a = false;
			if (ab>k) {b = false;}
			else {b = true;}
		} else if (b) {
			if (ba>k) {a = false;}
			else {a = true;}
			if (bb>k) b = false; 
		}
		if ((a | b)==false) {
			s = "No";
			break;
		}

	}
	cout << s << endl;
	return 0;
}

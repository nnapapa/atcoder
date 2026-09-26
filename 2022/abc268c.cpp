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
	vector<ll>	A(n),B(n,0),P(n);
	for(i=0;i<n;i++) cin >> P[i];
	for(i=0;i<n;i++) A[i] = (P[i]-i+n)%n;
	//for(i=0;i<n;i++) cout << A[i] << endl;
	for(i=0;i<n;i++) B[A[i]]++;
	a = B[0] ; x = 0;
	for(i=1;i<n;i++) {
		if (a < B[i]) {a = B[i]; x = i; }
	}
	//cout << "x=" << x << endl;
	for(i=0;i<n;i++) {
		j = (i - x + n)%n;
		b = (i - 1 + n) % n;
		c = (i + 1) % n;
		//printf("i j b c P[j]=%d %d %d %d %d\n",i,j,b,c,P[j]);
		if (b<c) {
			if (P[j]>=b && P[j]<=c) ans++;
		} else {
			if (P[j]>=b || P[j]<=c) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

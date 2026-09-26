#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n),C(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	a = b = x = y = 0;
	ll xc = 0 , yc = 0;
	for(i=0;i<n;i++) {
		a += A[i];
		b += B[i];
		C[i] = A[i] - B[i];
		if (C[i]>0) {x += C[i]; xc++;}
		if (C[i]<0) {y += -C[i]; yc++;}
	}
	sort(C.begin(),C.end());
	reverse(C.begin(),C.end());
	if (a<b) {
		cout << -1 << endl;
		return 0;
	}
	if (yc==0) {
		cout << 0 << endl;
		return 0;
	}

	c = 0;
	i = 0;
	while(c<y) {
		c += C[i++];
	}
	cout << yc + i << endl;
	return 0;
}

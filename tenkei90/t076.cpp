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
	vector<ll>	A(n*2);
	for(i=0,x=0;i<n;i++) {
		cin >> A[i];
		A[n+i] = A[i];
		x += A[i];
	}
	if (x%10>0) {
		cout << "No" << endl;
		return 0;
	}
	x /= 10;
	a=0;b=0;c=A[0];
	while(1) {
		if (c==x) {
			cout << "Yes" << endl;
			return 0;
		}
		if (a==b || c<x) {
			a++;
			if (a==2*n) break;
			c += A[a];
		} else {
			c -= A[b];
			b++;
			if (b==2*n) break;
		} 
	}

	cout << "No" << endl;
	return 0;
}

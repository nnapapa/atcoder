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
	cin >> n >> k;
	vector<ll>	A(100000,-1),B(100000,-1);
	for(i=0;i<k;i++) {
		B[i] = n;
		if (n==0) break;
		if (A[n]!=-1) break;
		A[n] = i;
		a = n;
		y = 0;
		while(a>0) {
			y += a%10;
			a  = a/10;
		}
		n = (n+y)%100000;
	}
	if (i==k || n==0) {
		cout << n << endl;
	} else {
		j = A[n];
		k = k - j;
		a = k % (i - j);
		cout << B[j+a] << endl;
	}
	return 0;
}

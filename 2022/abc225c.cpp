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
	cin >> n >> m;
	vector<ll> A(m);
	for(a=0;a<n;a++) {
		for(i=0;i<m;i++) cin >> A[i];
		if (a!=0) if (x != A[0]) s = "No";
		x = A[0] + 7;
		for(i=1;i<m;i++) {
			if (A[i-1]+1 != A[i]) s = "No";
			if ((A[i-1]-1)/7 != (A[i]-1)/7) s = "No";
		}
	}

	cout << s << endl;
	return 0;
}

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
	cin >> n;
	vector<ll>	A(n),B;
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) {
		B.push_back(A[i]);
		if (B.size()>3) {
			a = B.size() - 1;
			if (B[a-3]==B[a-2] && B[a-2]==B[a-1] && B[a-1]==B[a]) {
				for(j=0;j<4;j++) B.pop_back();
			}
		}
	}
	cout << B.size() << endl;
	return 0;
}

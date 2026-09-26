#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,p,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> p;

	vector<ll>	A(11,1);
	for(i=2;i<=10;i++) A[i] = A[i-1]*i;
	//for(i=1;i<=10;i++) cout << A[i] << endl;

	for(i=10;i>=1;i--) {
		if (p>=A[i]) {
			//cout << i << " " << p;
			ans += p/A[i];
			p = p%A[i];
			//cout << " " << ans << " " << p << endl;
		}
	}

	cout << ans << endl;
	return 0;
}

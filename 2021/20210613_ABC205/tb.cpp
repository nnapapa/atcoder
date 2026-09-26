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
	string	s = "Yes";
	cin >> n;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	for(i=0;i<n;i++) {
		if (A[i]!=i+1) s = "No";
	}

	cout << s << endl;
	return 0;
}

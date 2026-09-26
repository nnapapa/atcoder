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
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) cin >> B[i];
	for(i=0;i<n;i++) ans += A[i]*B[i];
	if (ans) s = "No";
	else s = "Yes";
	cout << s << endl;
	return 0;
}

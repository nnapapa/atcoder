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
	cin >> n >> k;
	vector<ll>	A(n,0),P(n);
	for(i=0;i<n;i++) {
		cin >> a >> b >> c;
		A[i] = P[i] = a + b + c;
	}
	sort(P.begin(),P.end());
	reverse(P.begin(),P.end());
	for(i=0;i<n;i++) {
		if (A[i]+300 >= P[k-1]) s = "Yes";
		else s = "No";
		cout << s << endl;
	}
	return 0;
}

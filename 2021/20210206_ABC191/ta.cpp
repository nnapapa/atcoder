#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,t,s;
	string		ans = "Yes";
	
	cin >> v >> t >> s >> d;
	if (d>=v*t && d<=v*s) ans = "No";
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	t;
	cin >> n >> t;
	vector<ll>	E(n+1,0),O(n+1,0);
	for(i=0;i<n;i++) {
		if (t[i]=='0') {
			O[i+1] = E[i] + 1;
			E[i+1] = O[i];
		} else {
			O[i+1] = O[i];
			E[i+1] = E[i] +1;
		}
	}
	/*
	for(i=0,x=0;i<n;i++) {
		if (t[i]=='0') x++;
		if (x&1) O[1]++;
		else E[1]++;
	}
	for(i=1;i<n;i++) {
		if (t[i]=='0') {
			O[i+1] = E[i];
			E[i+1] = O[i]-1;
		} else {
			O[i+1] = O[i];
			E[i+1] = E[i]-1;
		}
	}
	*/
	for(i=1;i<=n;i++) ans += E[i];
	cout << ans << endl;
	return 0;
}

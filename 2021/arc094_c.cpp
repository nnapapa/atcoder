#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	vector<ll>	a(3);
	cin >> a[0] >> a[1] >> a[2];

	while(a[0]!=a[1] || a[0]!=a[2] || a[1]!=a[2]) {
		ans++;
		sort(a.begin(),a.end());
		if (a[0]==a[1]) {
			a[0] = ++a[1];
		} else if (a[1]==a[2]) {
			a[0] += 2;
		} else {
			if (a[0]+1==a[1]) {a[0]++;a[2]++;}
			else a[0] += 2;
		}

	}
	
	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> s;
	vector<ll> ec(n,0),wc(n,0);
	if (s[n-1]=='E') wc[n-1]++;
	if (s[0]=='W') ec[0]++;

	for(i=1;i<n;i++) {
		ec[i] = ec[i-1];
		if (s[i]=='W') ec[i]++;
	}
	for(i=n-2;i>=0;i--) {
		wc[i] = wc[i+1];
		if (s[i]=='E') wc[i]++;
	}
	for(i=0;i<n;i++) {
		if (i==0) a = wc[1];
		else if (i==n-1) a = ec[n-2];
		else a = ec[i-1]+wc[i+1];
		ans = min(ans , a);
	}
	cout << ans << endl;
	return 0;
}

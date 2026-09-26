#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	cin >> n;
	vector<ll>	A(n*2+2,0);
	for(i=1;i<=n*2;i++) cin >> A[i];
	map<ll,vector<ll>> mp;
	set<vector<ll>> ans;
	for(i=1;i<=n*2;i++) mp[A[i]].push_back(i);
	for(i=1;i<n*2;i++) {
		a = mp[A[i]][0];
		b = mp[A[i]][1];
		c = mp[A[i+1]][0];
		d = mp[A[i+1]][1];
		if ((a+1==b)||(c+1==d)) continue;
		if ( (a+1==c) && ((b+1==d)||(b==d+1)) )
			ans.insert({min(A[i],A[i+1]),max(A[i],A[i+1])});
	}
	cout << ans.size() << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		testcase();
	}
	return 0;
}

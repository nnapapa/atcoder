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
	for(i=1;i<=n*2;i++) {
		if (mp.count(A[i])) mp[A[i]*2] = {i,A[i-1],A[i+1]};
		else mp[A[i]] = {i,A[i-1],A[i+1]};
	}
	A[0] = -1;
	for(i=1;i<=n*2;i++) {
		a = mp[A[i]][1];
		b = mp[A[i]][2];
		j = mp[A[i]*2][0];
		c = mp[A[i]*2][1];
		d = mp[A[i]*2][2];
		if ((a==c)&&(i+1<j))	ans.insert({min(A[i],A[a]),max(A[i],A[a])});
		if ((a==d)&&(i+1<j))	ans.insert({min(A[i],A[a]),max(A[i],A[a])});
		if ((b==c)&&(i+3<j))	ans.insert({min(A[i],A[b]),max(A[i],A[b])});
		if ((b==d)&&(i+1<j))	ans.insert({min(A[i],A[b]),max(A[i],A[b])});
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

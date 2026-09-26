#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	vector<ll> ans;
	string	s;
	cin >> n;
	unordered_map<ll,ll>	A;
	x = 1;
	while(x*x<n) {
		for(y=x+1;x*x+y*y<=n;y++) A[x*x+y*y]++;
		x++;
	}
	for(auto p : A) if (p.second==1) ans.push_back(p.first);
	sort(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(auto p : ans) cout << p << " ";
	cout << endl;
	return 0;
}

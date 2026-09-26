#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
map<ll,set<ll>> uv;
vector<ll> A,ans;
map<ll,ll> s;
ll y;
void root(ll a) {
	if (A.size()) return;
	ans.push_back(a);
	s[a]++;

	/*cout << a << ":" ;
	for(auto p : ans) {cout << p << " "; }
	cout << endl;*/

	if (a==y) {
		A = ans;
		return;
	}
	for(auto i : uv[a]) if (s[i]==0) root(i);
	ans.pop_back();
	s[a]--;
	if (s[a]==0) s.erase(a);
}

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,z;
	cin >> n >> m >> x >> y;
	uv = {};
	for(i=0;i<m;i++) {
		cin >> u >> v;
		uv[u].insert(v);
		uv[v].insert(u);
	}
	
	/*for(auto p : uv) {
		cout << p.first << "[ ";
		for(auto pp : p.second) cout << pp << " ";
		cout << "]" << endl;
	}*/
	A = {};
	ans = {};
	s = {};
	root(x);

	for(auto p : A) cout << p << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		testcase();
	}
	return 0;
}

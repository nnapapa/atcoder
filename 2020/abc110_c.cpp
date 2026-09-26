#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	ans = "Yes";
	string	s,t;
	cin >> s >> t;
	n = s.size();
	vector<map<ll,ll>> al(26);
	for(i=0;i<n;i++) {
		al[s[i]-'a'][i] = 1;
	}
	for(i=0;i<n;i++) {
		c = s[i]-'a';
		d = t[i]-'a';
		if (c==d) continue;
		for(auto p : al[d]) {
			x = p.first;
			if (s[x]==t[x]) ans = "No";
		}
	}

	cout << ans << endl;
	return 0;
}

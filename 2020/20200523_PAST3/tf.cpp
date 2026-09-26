//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y;
	cin >> n;
	vector<string>	s(n);
	vector<char> ans(n/2);
	for(i=0;i<n;i++) {
		cin >> s[i];
	}
	vector<unordered_map<char,int>> mp(n);
	for(i=0,j=n-1;i<n/2;i++,j--) {
		for(k=0;k<n;k++) mp[i][s[i][k]] = 1;
		for(k=0;k<n;k++) if (mp[i][s[j][k]]) ans[i] = s[j][k];
	}

	bool f = true;
	for(i=0;i<n/2;i++) if (ans[i]==0) f=false;

	if (f) {
		for(i=0;i<n/2;i++) cout << ans[i];
		if (n&1) cout << s[n/2][0];
		reverse(ans.begin(),ans.end());
		for(i=0;i<n/2;i++) cout << ans[i];
		cout << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}

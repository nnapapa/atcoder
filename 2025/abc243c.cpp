#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	char	c;
	cin >> n;
	vector<ll>	X(n),Y(n);
	for(i=0;i<n;i++) cin >> X[i] >> Y[i];
	cin >> s;
	map<ll,vector<ll>> mp;
	for(i=0;i<n;i++) {
		mp[Y[i]].push_back(i);
	}
	for(auto a : mp) {
		vector<pair<ll,char>> b;
		for(i=0;i<a.second.size();i++) {
			b.push_back( make_pair(X[a.second[i]], s[a.second[i]]) );
		}
		sort(b.begin(), b.end());
		z = 0;
		for(i=0;i<b.size();i++) {
			if (z==0) {
				if (b[i].second == 'R') z = 1; 
			}
			if (z==1) {
				if (b[i].second == 'L') ans++;
			}
		}
	}
	if (ans>0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}

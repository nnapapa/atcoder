#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x7fffffff
#define INFL 0x7fffffffffffffffLL


int main() {
	ll		ty,q,d,i,x,ans = 0;
	char	c;
	vector<ll> al(26);
	vector<ll> vans;
	vector<pair<char,int>> s;
	cin >> q;
	ll p0 = 0;
	ll t  = 0;
	for(i=0;i<q;i++) {
		cin >> ty;
		if (ty == 1) {
			cin >> c >> x;
			s.push_back(make_pair(c,x));
			t += x;
			//e += x;
		} else {
			cin >> d;
			for(int j=0;j<26;j++) al[j] = 0;
			if (d > t) d = t;
			t -= d;
			while(d > 0) {
				if (s[p0].second <= d) {
					al[s[p0].first-'a'] += s[p0].second;
					d -= s[p0].second;
					p0++;
				} else {
					al[s[p0].first-'a'] += d;
					s[p0].second -= d;
					d = 0;
				}
			}
			ans = 0;
			for(int j=0;j<26;j++) ans += al[j]*al[j];
			vans.push_back(ans);
		}
	}
	for(i=0;i<vans.size();i++) {
		cout << vans[i] << endl;
	}


}

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;
	unordered_map<string, int> ss;
	for(i=0;i<n;i++) {
		cin >> s;
		sort(s.begin(),s.end());
		ss[s]++;
	}

	for(auto p : ss) {
		ll cnt = p.second;
		ans += cnt*(cnt-1)/2;
	}
	cout << ans << endl;
	return 0;
}

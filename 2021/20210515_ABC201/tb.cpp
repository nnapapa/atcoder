#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,t,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	vector<pair<ll , string>>	st;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> s >> t;
		st.push_back(make_pair(t , s));
	}
	sort(st.begin(),st.end());
	reverse(st.begin(),st.end());

	cout << st[1].second << endl;
	return 0;
}

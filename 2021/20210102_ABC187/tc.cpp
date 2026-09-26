#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s,t;
	cin >> n;
	map<string,ll> mp;
	for(i=0;i<n;i++) {
		cin >> s;
		if (s[0]=='!') {
			t = "";
			for(j=1;j<s.size();j++) t += s[j];
			mp[t] |= 1;
		} else {
			mp[s] |= 2;
		}
	}
	s = "satisfiable";
	for(auto p : mp) {
		if (p.second==3) s = p.first;
	}

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

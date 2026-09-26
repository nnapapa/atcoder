#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	ss = "Yes";
	cin >> n >> w;
	vector<ll>	s(n),t(n),p(n);
	vector<vector<ll>> st(200001),ed(200001);
	for(i=0;i<n;i++) {
		cin >> s[i] >> t[i] >> p[i];
	}
	for(i=0;i<n;i++) {
		st.at(s[i]).push_back(p[i]);
		ed.at(t[i]).push_back(p[i]);
	}
	for(x=0;x<=200000;x++) {
		for(i=0;i<st[x].size();i++) {
			ans += st[x][i];
		}
		for(i=0;i<ed[x].size();i++) {
			ans -= ed[x][i];
		}
		if (ans > w) ss = "No";
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ss << endl;
	return 0;
}

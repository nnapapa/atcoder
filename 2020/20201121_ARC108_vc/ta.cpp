#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

/* 約数列挙 */
vector<ll> divisor(ll n) {
	vector<ll> ret;
	for(ll i=1;i*i<=n;i++) {
		if (n%i==0) {
			ret.push_back(i);
			if (i*i!=n) ret.push_back(n/i);
		}
	}
	//sort(ret.begin(),ret.end());
	return ret;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,n,v,w,x,y,z,s,p;
	ll		ans = 0;
	string	ss = "Yes";
	cin >> s >> p;
	vector<ll> m;
	m = divisor(p);
	for(i=0;i<m.size();i++) {
		n = s - m[i];
		if (n*m[i]==p) break;
	}
	if (i==m.size()) {
		ss = "No";
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ss << endl;
	return 0;
}

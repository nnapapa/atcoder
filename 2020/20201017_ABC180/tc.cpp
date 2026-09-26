#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

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
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	vector<ll>		ans;
	string	s;
	cin >> n;
	ans = divisor(n);
	sort(ans.begin(),ans.end());
	for(i=0;i<ans.size();i++) cout << ans[i] << endl;
	return 0;
}

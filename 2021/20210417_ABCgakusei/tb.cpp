#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
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
	ll		ans = 0;
	string	s;
	cin >> a >> b;

	vector<ll>	A(200001,0);
	for(i=a;i<=b;i++) {
		vector<ll> di = divisor(i);
		for(j=0;j<di.size();j++) {
			A[di[j]]++;
		}
	}
	for(i=0;i<200001;i++) {
		if (A[i]>=2) ans = i;
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

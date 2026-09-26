#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;

	dsu		d(n);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		d.merge(a-1 , b-1);
	}
	map<ll,ll> tot;
	for(i=0;i<n;i++) {
		a = d.leader(i);
		tot[a] = 1;
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << tot.size()-1 << endl;
	return 0;
}

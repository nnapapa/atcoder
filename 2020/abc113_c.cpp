#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,p;
	string	s;
	cin >> n >> m;
	char ans[100000][13];
	//(m,vector<char>(13));
	vector<tuple<ll,ll,ll>> vyp(m);
	vector<ll> cnt(n,0);

	//vector<ll>	aa(n);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		vyp[i] = make_tuple(b , a , i);
	}
	sort(vyp.begin(), vyp.end());
	for(i=0;i<m;i++) {
		tie(y,p,j) = vyp[i];
		cnt[p-1]++;
		sprintf(ans[j] , "%06d%06d",p,cnt[p-1]);
	}
	for(i=0;i<m;i++) {
		cout << ans[i] << endl;
	}

	return 0;
}

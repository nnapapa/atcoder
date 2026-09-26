#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	string	ans;
	cin >> n;
	vector<ll>	T(200002,0);
	map<ll,ll>	mp;
	m = 0;
	for(i=0;i<n;i++) {
		cin >> a;
		mp[a]++;
		m = max(m,a);
	}
	for(i=1,a=n;i<=200000;i++) {
		T[i] = a;
		a -= mp[i];		
	}
	//for(i=1;i<=30;i++) cout << T[i] << " ";
	//cout << endl;
	for(i=1;i<=m;i++) {
		ans += T[i]%10 + '0';
		T[i+1] += T[i]/10;
	}
	T[m] = T[m]/10;
	while(T[m]) {
		ans += T[m]%10 + '0';
		T[m] = T[m]/10;
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
	return 0;
}

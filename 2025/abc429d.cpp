
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,t,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m >> c;
	map<ll,ll> mp;
	for(i=0;i<n;i++) {
		cin >> a;
		mp[a]++;
	}
	vector<ll>	A(mp.size()*2),B(mp.size()*2);
	i = 0;
	for(auto t : mp) {
		A[i] = t.first;
		B[i] = B[mp.size()+i] = t.second;
		A[mp.size()+i] = t.first + m;
		i++;
	}
	/*for(i=0;i<mp.size()*2;i++) cout << A[i] << " ";
	cout << endl;
	for(i=0;i<mp.size()*2;i++) cout << B[i] << " ";
	cout << endl;
	*/
	for(i=0,a=0;i<mp.size();i++) {
		a += B[i];
		if (a>=c) break;
	}
	b = i;
	for(i=0;i<mp.size();i++) {
		a -= B[i];
		while(a<c) {
			a += B[++b];

		}
		ans += a*(A[i+1]-A[i]);
	}
	cout << ans << endl;
	return 0;
}

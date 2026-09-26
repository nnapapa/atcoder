#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),C(n);
	for(i=0;i<n;i++) cin >> A[i];
	map<ll,ll> mp;
	for(i=0,k=0;i<n;i++) {
		C[i] = k;
		if (mp[A[i]]==0) {
			k++;
		}
		mp[A[i]]++;
	}
	for(i=0;i<n;i++) cout << C[i] << " ";
	cout << endl << "k=" << k << endl;
	for(i=1;i<n-1;i++) {
		ans += C[i]*(k-C[i]-1);
	}
	cout << ans << endl;
	return 0;
}

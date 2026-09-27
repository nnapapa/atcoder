#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	P(n),Q(n),Z(n);
	for(i=0;i<n;i++) cin >> P[i];
	for(i=0;i<n;i++) cin >> Q[i];
	for(i=0;i<n;i++) Z[Q[i]-1] = i+1;
	for(i=0;i<n;i++) {
		cout << Q[P[Z[i]-1]-1] << " ";
	}
	cout << endl;
	return 0;
}

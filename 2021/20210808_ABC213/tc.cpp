#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w >> n;

	vector<ll> A(n+1),B(n+1);
	for(i=1;i<=n;i++) cin >> A[i] >> B[i];
	map<ll,ll> ma,mb,C,D;
	for(i=1;i<=n;i++) {
		ma[A[i]]++;
		mb[B[i]]++;
	}
	a = b = 1; 
	for(auto p: ma) C[p.first] = a++;
	for(auto p: mb) D[p.first] = b++;
	for(i=1;i<=n;i++) {
		cout << C[A[i]] << " " << D[B[i]] << endl;
	}
	
	return 0;
}

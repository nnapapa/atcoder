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
	cin >> n >> k;

	vector<pair<ll,ll>>	A(n);
	for(i=0;i<n;i++) {
		cin >> a;
		A[i] = make_pair(a , i);
	}
	sort(A.begin(),A.end());
	ans = k/n;
	k = k%n;
	vector<ll> B(n,ans);
	for(i=0;i<k;i++) B[A[i].second]++;
	
	for(i=0;i<n;i++) cout << B[i] << endl;
	return 0;
}

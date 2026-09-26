#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
//using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll calc() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,t;
	cin >> n;
	vector<ll> A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	for(i=0;i<n;i++) if (A[0]!=A[i]) break;
	return n - i; 
}
int main() {
	int t;
	cin >> t;
	vector<ll>	ans(t);
	for(int i=0;i<t;i++) ans[i] = calc();

	for(int i=0;i<t;i++) cout << ans[i] << endl;
	return 0;
}

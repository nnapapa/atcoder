#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	cin >> n >> m;

	vector<ll>	A(1001,0),ans(1001,INFL);
	for(i=0;i<n;i++) {
		cin >> a;
		A[a]++;
	}
	for(i=0;i<m;i++) {
		cin >> a;
		A[a]++;
	}
	a = 0;
	for(i=1;i<=1000;i++) {
		if (A[i]==1) ans[a++]=i;
	}

	for(i=0;i<a;i++) {
		if (i>0) cout << " ";
		cout << ans[i];
	}

	cout << endl;
	return 0;
}

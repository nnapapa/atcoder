#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	cin >> n;
	vector<vector<ll>>	A(1005,vector<ll>(1005,0));
	vector<ll> ans(n+1,0);
	for(i=0;i<n;i++) {
		cin >> a >> b >> c >> d;
		A[a+1][b+1]++;
		A[a+1][d+1]--;
		A[c+1][b+1]--;
		A[c+1][d+1]++;
	}
	//for(i=1;i<10;i++) {for(j=1;j<10;j++) cout << A[i][j] << " ";cout << endl;}
	for(i=1;i<1005;i++) {
		for(j=1;j<1005;j++) {
			A[i][j] = A[i][j-1] + A[i][j];
		}
	}
	//cout << endl;
	//for(i=1;i<10;i++) {for(j=1;j<10;j++) cout << A[i][j] << " ";cout << endl;}
	for(j=1;j<1005;j++) {
		for(i=1;i<1005;i++) {
			A[i][j] = A[i-1][j] + A[i][j];
			ans[A[i][j]]++;
		}
	}
	//cout << endl;
	//for(i=1;i<10;i++) {for(j=1;j<10;j++) cout << A[i][j] << " ";cout << endl;}
	for(i=1;i<=n;i++) cout << ans[i] << endl;
	return 0;
}

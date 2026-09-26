#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	cin >> h >> w;
	vector<vector<ll>>	A(h,vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> A[i][j];
	for(i=0;i<w;i++) {
		for(j=0;j<h;j++) {
			cout << A[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}

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
	cin >> n;
	vector<ll>	A(46,0),B(46,0),C(46,0);
	for(i=0;i<n;i++) {cin >> a; A[a%46]++;}
	for(i=0;i<n;i++) {cin >> a; B[a%46]++;}
	for(i=0;i<n;i++) {cin >> a; C[a%46]++;}
	for(i=0;i<46;i++) {
		if (A[i]==0) continue;
		for(j=0;j<46;j++) {
			if (B[j]==0) continue;
			for(k=0;k<46;k++) {
				if (C[k]==0) continue;
				if ((i+j+k)%46==0) ans += A[i]*B[j]*C[k];
			}
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

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
	cin >> n >> k;
	vector<vector<ll>>	AB(5001 ,vector<ll>(5001,0)),sum(5001 ,vector<ll>(5001,0)),ANS(5001 ,vector<ll>(5001,0));
	for(i=0;i<n;i++) {
		cin >> a >> b;
		AB[a][b]++;
	}
	for(i=1;i<=5000;i++) for(j=1;j<=5000;j++) sum[i][j] = sum[i][j-1] + AB[i][j];
	for(i=1;i<=5000;i++) for(j=1;j<=5000;j++) sum[j][i] += sum[j-1][i];

	for(i=0;i<=5000;i++) for(j=0;j<=5000;j++) {
		a = sum[i][j] - sum[i][max(0LL,j-k-1)] - sum[max(0LL,i-k-1)][j] + sum[max(0LL,i-k-1)][max(0LL,j-k-1)];
		ANS[i][j] = a;
		ans = max(ans , a);
	}

	cout << ans << endl;
/*
	for(i=0;i<=8;i++) {
		for(j=0;j<=8;j++) cout << AB[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(i=0;i<=8;i++) {
		for(j=0;j<=8;j++) cout << sum[i][j] << " ";
		cout << endl;
	}	
	cout << endl;
	for(i=0;i<=20;i++) {
		for(j=0;j<=20;j++) cout << ANS[i][j] << " ";
		cout << endl;
	}
*/	 
	return 0;
}

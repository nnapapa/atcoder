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
	cin >> n >> s;
	vector<vector<vector<ll>>>	dp2(n+1 , vector<vector<ll>>(0x400, vector<ll>(10 , 0)));
	for(i=0;i<n;i++) {
		x = s[i] - 'A';
		for(j=0;j<0x400;j++) {
			for(k=0;k<10;k++) {
				dp2[i+1][j][k] += dp2[i][j][k];	//選ばない
				dp2[i+1][j][k] %= 998244353;
				if (((j & (1<<x))==0) || x==k) {	//選ぶ
					if (j==0) dp2[i+1][1<<x][x] = 1;
					else {
						dp2[i+1][j|(1<<x)][x] += dp2[i][j][k];
						dp2[i+1][j|(1<<x)][x] %= 998244353;
					}
				}
			}
		}
	}

	for(j=1;j<0x400;j++) for(k=0;k<10;k++) { ans += dp2[n][j][k]; ans %= 998244353; }

	cout << ans << endl;
	return 0;
}

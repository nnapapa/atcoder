#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		s,a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string		ans;
	cin >> n >> s;
	vector<ll>	A(n+1),B(n+1);
	for(i=1;i<=n;i++) cin >> A[i] >> B[i];
	vector<vector<ll>>	dp2(s+1 , vector<ll>(n+1,0));
	vector<vector<char>>	dps(s+1 , vector<char>(n+1,0));
	if (A[1]<=s) { dp2[A[1]][1] = 1;dps[A[1]][1] = 'A'; }
	if (B[1]<=s) { dp2[B[1]][1] = 1;dps[B[1]][1] = 'B'; }
	for(i=2;i<=n;i++) {
		for(j=1;j<=s;j++) {
			if (j-A[i]>=0) if (dp2[j-A[i]][i-1]) {
				dp2[j][i] = 1; dps[j][i] = 'A';
			}
			if (j-B[i]>=0) if (dp2[j-B[i]][i-1]) {
				dp2[j][i] = 1; dps[j][i] = 'B';
			}
		}
	}
	if (dp2[s][n]==0) {
		cout << "Impossible" << endl;
		return 0;
	}
	for(i=n;i>0;i--) {
		ans.push_back(dps[s][i]);
		if (dps[s][i]=='A') s -= A[i];
		else s -= B[i];
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
	return 0;
}

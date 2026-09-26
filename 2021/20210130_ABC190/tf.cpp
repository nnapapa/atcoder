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
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<ll>	dp(n,0),sum(n,0);
	for(i=0;i<n;i++) {
		if (A[i]>i) {
			dp[i]++;
			dp[A[i]]--;
		}
	}
	for(i=1;i<n;i++) {
		dp[i] += dp[i-1];
	}
	for(i=0;i<n;i++) {
		if (A[i]==i) sum[i] = dp[i];
		if (A[i]> i) sum[i] = A[i] - i;
		if (A[i]< i) sum[i] = 0;
	}
	ans = 0;
	for(i=0;i<n;i++) {
		ans += sum[i];
	}
	cout << ans << endl;
	for(i=0;i<n-1;i++) {
		ans -= A[i];
		ans += n - 1 - A[i];
		cout << ans << endl;
	}

	
	return 0;
}

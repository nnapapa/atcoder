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
	vector<ll>	A(n),cnt(300000,0);
	for(i=0;i<n;i++) {
		cin >> A[i];
		if (cnt[A[i]]<k) cnt[A[i]]++;
	}

	a = k;
	for(i=0;i<300000;i++) {
		if (cnt[i]==0) break;
		ans += min(a , cnt[i]);
		a = min(a , cnt[i]);
	}

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

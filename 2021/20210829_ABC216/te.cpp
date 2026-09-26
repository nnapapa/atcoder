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
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	for(i=1;i<n;i++) {
		ll sa = A[i-1] - A[i];
		if (sa*i < k) {
			for(j=sa*i;j<k-sa*i;j++) ans += A[i-1]
			break;
		} else {
			ans += A[i-1]*sa*i - i*(sa-1)(sa-2)/2;
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

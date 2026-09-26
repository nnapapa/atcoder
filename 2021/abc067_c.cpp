#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	vector<ll>	A(n);
	a = b = 0; 
	for(i=0;i<n;i++) cin >> A[i];
	for(i=0;i<n;i++) a += A[i];
	for(i=0;i<n-1;i++) {
		a -= A[i];
		b += A[i];
		ans = min(ans , abs(b-a));
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

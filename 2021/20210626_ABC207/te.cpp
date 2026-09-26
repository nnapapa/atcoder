#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll n;
vector<ll>	A(3000);
vector<vector<ll>> memo(3001,vector<ll>(3001,-1));

ll calc(ll bi , ll ai) {
	ll ret = 0;
	ll x = 0;
	if (ai==n) return 1;
	if (memo[bi][ai]!=-1) return memo[bi][ai];
	for(int i=ai;i<n;i++) {
		x += A[i];
		if (x%bi==0) {
			ret += calc(bi+1,i+1);
			ret %= 1000000007;
		}
	}
	return memo[bi][ai] = ret;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	for(i=0;i<n;i++) cin >> A[i];
	ans = calc(1,0);

	cout << ans << endl;
	return 0;
}

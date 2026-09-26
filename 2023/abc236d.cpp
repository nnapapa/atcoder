#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll		n, ans = 0;
vector<vector<ll>>	A(16, vector<ll>(16,-1));
void calc(ll p,ll a) {
	ll		b,c,d,h,i,j,k,l,m,t,q,r,v,w,x,y,z;
	if (p==0) {
		ans = max(ans , a);
		return;
	}
	i=2*n-1;
	while ((p&(1<<i))==0) i--;
	p = p - (1<<i);
	for(j=i-1;j>=0;j--) {
		if (p&(1<<j)) calc(p-(1<<j) , a ^ A[j][i]);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,t,q,r,v,w,x,y,z;
	cin >> n;

	for(i=0;i<2*n-1;i++) for(j=i+1;j<2*n;j++) cin >> A[i][j];
	calc( (1<<(2*n))-1 , 0 );
	cout << ans << endl;
	return 0;
}

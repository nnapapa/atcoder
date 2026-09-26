#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> m;
	vector<ll>	U(m), V(m);
	for(i=0;i<m;i++) cin >> U[i] >> V[i];
	for(i=0;i<(1<<n);i++) {
		a = 0;
		for(j=0;j<m;j++) {
			u = U[j]-1;
			v = V[j]-1;
			if (((i>>u)&1)==((i>>v)&1)) a++;
			//printf(" u=%d v=%d\n",u,v);
		}
		//printf("i=%x a=%d\n",i,a);
		ans = min(ans, a);
	}
	cout << ans << endl;
	return 0;
}

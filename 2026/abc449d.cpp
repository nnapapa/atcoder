#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,f,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	vector<ll> L(2),R(2);
	cin >> L[0] >> R[0] >> L[1] >> R[1];
	for(x=c=f=0;x<2;x++) {
		l = L[x];
		r = R[x];
		d = L[(x+1)%2];
		u = R[(x+1)%2];
		if (l%2) l++;
		if (r%2) r--;
		for(i=l;i<=r;i+=2) {
			a = -1*abs(i);
			b = abs(i);
			if (a>=d && a<=u && i) c++;
			if (b>=d && b<=u && i) c++;
			if (d>a) a = d;
			if (u<b) b = u;
			if (b-a+1>0) ans += b - a + 1;
			//printf("x i b-a+1 c:%d %d %d %d\n",x,i,b-a+1,c);
		}
	}
	ans -= c/2;
	if (l<=0 && r>=0 && d<=0 && u>=0) ans--;
	cout << ans << endl;
	return 0;
}

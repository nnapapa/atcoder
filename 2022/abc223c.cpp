#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	double		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i] >> B[i];
	double e,t = 0;
	for(i=0;i<n;i++) {
		t += (double)A[i] / B[i];
	}
	t /= 2.0;
	//printf("t = %f\n",t);
	for(i=0;i<n;i++) {
		e = (double)A[i] / B[i];
		if (e<t) {
			t -= e;
			ans += A[i];
		} else {
			ans += t * B[i];
			//printf("last t = %f e = %f ans = %f\n",t,e,ans);
			break;
		}
			//printf("t = %f e = %f ans = %f\n",t,e,ans);
	}
	printf("%.10f\n",ans);
	return 0;
}

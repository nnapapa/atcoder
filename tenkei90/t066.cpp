#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	double		ans = 0.0;
	string	s;
	cin >> n;
	vector<ll>	L(n),R(n);
	for(i=0;i<n;i++) cin >> L[i] >> R[i];
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			a = R[i]-L[i]+1;
			b = R[j]-L[j]+1;
			c = a*b;
			d = 0;
			for(x=L[i];x<=R[i];x++) {
				for(y=L[j];y<=R[j];y++) {
					if (x>y) d++;
				}
			}
			/*
			for(k=L[j];k<=R[j];k++) {
				if (k<L[i]) d += R[i]-L[i]+1;
				else if (k<R[i]) d += R[i]-k;
			}
			*/
			ans += (double)d/c;
		}
	}

	printf("%.10f\n",ans);
	return 0;
}

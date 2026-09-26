//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));
	for(i=1;i<=n;i++) {
		ans = 0;
		for(x=1;x<=sqrt(i);x++) {
			for(y=1;y<=x;y++) {
				for(z=1;z<=y;z++) {
					if (x*x+y*y+z*z+x*y+y*z+z*x==i) {
						if (x==y && y==z) ans++;
						else if (x==y && y!=z) ans+=3;
						else if (x==z && y!=z) ans+=3;
						else if (x!=y && y==z) ans+=3;
						else ans+=6;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

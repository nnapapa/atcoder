#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;

	for(ll ab=2;ab<=2*n;ab++) {
		ll cd = ab - k;
		if (cd>=2 && cd <= 2*n) {
			x = ab-1;
			y = cd-1;
			if (ab-n>1) {
				x = (2*n - ab + 1);
				//if ((ab&1)==0) x++;
			}
			if (cd-n>1) {
				y = (2*n - cd + 1);
				//if ((cd&1)==0) y++;
			}
			ans += x * y;
			//cout << "ab:" << ab << " cd:" << cd << " ans:" << ans << endl;
		}
	}

	cout << ans << endl;
	return 0;
}

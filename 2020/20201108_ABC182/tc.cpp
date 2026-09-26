#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n;
	vector<ll>	aa(20);
	k=0;
	while(n!=0) {
		aa[k++] = n%10;
		n /=10;
	}
	for(i=1;i<(1<<k);i++) {
		n = 0;
		x = 0;
		for(j=k-1;j>=0;j--) {
			if (i&(1<<j)) {
				n *= 10;
				n += aa[j];
			} else x++;
		}
		if (n%3==0) ans = min(ans , x);
	}

	if (ans==INFL) ans = -1;
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	if (k==0) {
		cout << n*n << endl;
		return 0;
	}
	for(i=k+1;i<=n;i++) {
		ans += i - k;
		if (n>=i+k)	{
			ans += (n/i-1)*(i-k);
			if (n%i>=k) ans += n%i - k + 1;
		}
		//cout << i << " " << ans << endl;
	}

	cout << ans << endl;
	return 0;
}

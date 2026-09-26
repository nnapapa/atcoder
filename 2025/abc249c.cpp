#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	char	c;
	cin >> n >> k;
	vector<string>	S(n);
	for(i=0;i<n;i++) cin >> S[i];
	for(x=1;x<(1<<n);x++) {
		t = 0;
		for(c='a';c<='z';c++) {
			b = 0;
			y = 0;
			for(i=0;i<n;i++) {
				if ((x & (1<<i)) == 0) continue;
				y++;
				for(j=0;j<S[i].size();j++) {
					if (S[i][j]==c) {
						b++;
						break;
					}
				}
			}
			if (b==k) t++;
		}
		ans = max(ans,t);
	}
	cout << ans << endl;
	return 0;
}

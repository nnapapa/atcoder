#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll> S(n),ANS(n,0);
	for(i=0;i<n;i++) cin >> S[i];
	for(i=1;i<1000;i++) {
		for(j=1;j<1000;j++) {
			x = 4*i*j+3*i+3*j;
			if (x>1000) continue;
			for(k=0;k<n;k++) {
				if (S[k]==x) ANS[k] = 1;
			}
		}
	}
	for(i=0;i<n;i++) ans += ANS[i];
	cout << n - ans << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 100000;
	string	s;
	cin >> n;
	vector<string>	S(n);
	vector<ll> C(1005,0),D(1005,0);
	for(i=0;i<n;i++) cin >> S[i];
	for(x='0';x<='9';x++) {
		a = 0;
		C = D;
		for(t=0;t<10;t++) {
			for(i=0;i<n;i++) {
				if (S[i][t] == x) {
					j = t;
					while (C[j]) j += 10;
					C[j] = 1;  
					a = max(a, j);
				}
			}
		}
		//cout << a << endl;
		ans = min(ans,a);
	}

	cout << ans << endl;
	return 0;
}

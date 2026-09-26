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
	vector<string>	S(n);
	for(i=0;i<n;i++) cin >> S[i];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (i<n-5) {
				for(k=0,c=0;k<6;k++) {
					if (S[i+k][j]=='.') c++;
				}
				if (c<=2) break;
			}
			if (j<n-5) {
				for(k=0,c=0;k<6;k++) {
					if (S[i][j+k]=='.') c++;
				}
				if (c<=2) break;
			}
			if ((i<n-5)&&(j<n-5)) {
				for(k=0,c=0;k<6;k++) {
					if (S[i+k][j+k]=='.') c++;
				}
				if (c<=2) break;
			}
			if ((i>=5)&&(j<n-5)) {
				for(k=0,c=0;k<6;k++) {
					if (S[i-k][j+k]=='.') c++;
				}
				if (c<=2) break;
			}
		}
		if (c<=2) break;
	}
	if (c<=2)	cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

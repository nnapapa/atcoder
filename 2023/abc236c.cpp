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
	cin >> n >> m;
	vector<string>	S(n), T(m), ANS(n);
	for(i=0;i<n;i++) cin >> S[i];
	for(i=0;i<m;i++) cin >> T[i];
	for(i=0,a=0;i<n;i++) {
		if (S[i]==T[a]) {
			a++;
			ANS[i] = "Yes";
		} else {
			ANS[i] = "No";
		}
	}
	for(i=0;i<n;i++) cout << ANS[i] << endl;
	return 0;
}

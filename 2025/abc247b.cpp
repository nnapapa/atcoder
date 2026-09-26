#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	string	ans = "Yes";
	string	s, t;
	cin >> n;
	vector<string> S(n),T(n);
	map<string,ll> ms;

	for(i=0;i<n;i++) cin >> S[i] >> T[i];
	for(i=0;i<n;i++) {
		a = b = 1;
		for(j=0;j<n;j++) {
			if (i==j) continue;
			if (S[i]==S[j] || S[i]==T[j]) a = 0;
			if (T[i]==S[j] || T[i]==T[j]) b = 0;
			if (a==0 && b==0) ans = "No";
		}
	}

	cout << ans << endl;
	return 0;
}

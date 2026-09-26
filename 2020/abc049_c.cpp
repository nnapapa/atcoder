#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	ans = "YES";
	string	s;
	bool		f;
	cin >> s;
	vector<string> exp(4);
	exp[0] = "resare";
	exp[1] = "esare";
	exp[2] = "remaerd";
	exp[3] = "maerd";
	vector<ll> ll(4);
	for(i=0;i<4;i++) ll[i] = exp[i].size();
	reverse(s.begin(),s.end());
	for(i=0;i<s.size();i++) {
		for(j=0;j<4;j++) {
			f = true;
			for(k=0;k<ll[j];k++) {
				if (s[i+k]!=exp[j][k]) f = false;
			}
			if (f) {
				i += ll[j]-1;
				break;
			}
		}
		if (!f) {
			ans = "NO";
			break;
		}
	}

	cout << ans << endl;
	return 0;
}

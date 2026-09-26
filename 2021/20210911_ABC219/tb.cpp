#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	string	t , ans;
	vector<string> s(3);
	cin >> s[0] >> s[1] >> s[2] >> t;
	for(i=0;i<t.size();i++) {
		ans += s[ t[i]-'1' ];
	}


	cout << ans << endl;
	return 0;
}

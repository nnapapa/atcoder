#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,q,r,v,w,x,y,z;
	ll		ans = 0;
	vector<string> s(3),t(3);

	cin >> s[0] >> s[1] >> s[2] >> t[0] >> t[1] >> t[2];
	a = 0;
	for(i=0;i<3;i++) {
		if (s[i]==t[i]) a++;
	}
	if ((a==0)||(a==3))	cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

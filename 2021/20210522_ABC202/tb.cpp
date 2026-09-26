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
	cin >> s;
	for(i=s.size()-1;i>=0;i--) {
		if (s[i]=='6') cout << '9';
		else if (s[i]=='9') cout << '6';
		else cout << s[i];
	}
	cout << endl;

	
	return 0;
}

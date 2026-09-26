#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans;
	string	s;
	cin >> s;
	for(i=0;i<10;i++) {
		a = 1;
		for(j=0;j<9;j++) {
			if (s[j]-'0'==i) a = 0;
		}
		if (a) break;

	}
	cout << i << endl;
	return 0;
}

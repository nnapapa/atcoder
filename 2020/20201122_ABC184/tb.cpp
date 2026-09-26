#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> x;
	cin >> s;

	for(i=0;i<n;i++) {
		if (s[i]=='x') {
			if (x>0) x--;
		} else x++;
	}


	cout << x << endl;
	return 0;
}

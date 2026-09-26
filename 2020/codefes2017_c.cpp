#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = -1;
	string	s,t;
	cin >> s;
	n = s.size();
	for(i=0;i<n;i++) {
		if (s[i]!='x') t += s[i];
	}
	m = t.size();
	for(i=0;i<m/2;i++) {
		if (t[i]!=t[m-1-i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	x = 0;
	for(i=0,j=n-1;i<n;i++) {
		if (s[i]=='x') {
			if (s[j]!='x') x++;
			else j--;
		}
		if (s[i]!='x') {
			if (s[j]=='x') {
				while (s[j]=='x'&&j>=0) {x++; j--;}
			}
			j--;
		}
		if (i>=j) break;
	}

	cout << x << endl;
	return 0;
}

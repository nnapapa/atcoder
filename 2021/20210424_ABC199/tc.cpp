#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,q,t;
	ll		ans = 0;
	string	s;
	cin >> n;
	cin >> s;
	cin >> q;
	bool f = false;
	for(i=0;i<q;i++) {
		cin >> t >> a >> b;
		if (t==2) f = !f;
		if (t==1) {
			a--; b--;
			if (f) {
				if (a<n) a = a + n;
				else a = a - n;
				if (b<n) b = b + n;
				else b = b - n;
			}
			swap(s[a],s[b]);
		}
	}
	if (f) for(i=0;i<n;i++) swap(s[i],s[i+n]);
	cout << s << endl;
	return 0;
}

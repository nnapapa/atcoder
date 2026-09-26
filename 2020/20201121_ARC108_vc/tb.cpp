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
	cin >> n >> s;
	vector<ll> aa(n,0);
	stack<ll> ss;
	for(i=0;i<n;i++) {
		if (s[i]=='f') aa[i] = 1;
		if (s[i]=='o') aa[i] = 2;
		if (s[i]=='x') aa[i] = 3;
	}
	for(i=0;i<n;i++) {
		if (aa[i] == 0) {
			while(!ss.empty()) ss.pop();
		} else if (aa[i] == 1) {
			ss.push(1);
		} else if (aa[i] == 2) {
			ss.push(2);
		} else {
			if (ss.size()>=2) {
				b = ss.top();
				ss.pop();
				a = ss.top();
				ss.pop();
				if (a==1&&b==2) {
					ans += 3;
				} else {
					while(!ss.empty()) ss.pop();
				}
			} else {
				while(!ss.empty()) ss.pop();
			}
		}

	}
	cout << n - ans << endl;
	return 0;
}

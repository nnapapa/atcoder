#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 1000;
	string	s,t;
	cin >> s;
	for(char c='a'; c<='z'; c++) {
		n = s.size();
		t = s;
		a = 0;
		while(1) {
			for(i=0;i<n;i++) if (t[i]!=c) break;
			if (i==n) break;
			n--;
			a++;
			for(i=0;i<n;i++) if (t[i+1]==c) t[i] = c;
		}
		ans = min(ans,a);
	}

	cout << ans << endl;
	return 0;
}

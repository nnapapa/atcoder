#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,s,t;
	ll		ans = 0;
	cin >> s >> t;
	for(a=0;a<=s;a++) {
		for(b=0;b<=s;b++) {
			if (a+b>s) break;
			for(c=0;c<=s;c++) {
				if (a+b+c>s) break;
				if (a*b*c<=t) ans++;
			}
		}
	}


	cout << ans << endl;
	return 0;
}

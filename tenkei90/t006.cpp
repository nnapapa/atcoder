#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s,ans;
	cin >> n >> k >> s;
	x = 0;
	for(i=0;i<k;i++) {
		bool f = false;
		for(char c='a'; c<='z'; c++) {
			for(j=x;j<=n-k+i;j++) {		
				if (s[j]==c) {
					ans += c;
					x = j+1;
					f = true;
					break;
				}
			}
			if (f) break;
		}
	}

	cout << ans << endl;
	return 0;
}

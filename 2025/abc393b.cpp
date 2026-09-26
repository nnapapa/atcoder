#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> s;
	for(i=0;i<s.size()-2;i++) {
		if (s[i]!='A') continue;
		a = i;
		for(j=i+1;j<s.size()-1;j++) {
			if (s[j]!='B') continue;
			b = j;
			for(k=j+1;k<s.size();k++) {
				if (s[k]!='C') continue;
				c = k;
				if (b-a == c-b) ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

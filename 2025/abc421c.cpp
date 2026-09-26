#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> s;
	n = 2*n;
	a = b = 0;
	for(i=1,p=0;i<=n;i++) {
		if (s[i-1]=='A') {
			p++;
			//printf("p i  %d %d\n",p,i);
			a += abs(2*p-1-i);
			b += abs(2*p  -i);
		}
	}
	cout << min(a,b) << endl;
	return 0;
}

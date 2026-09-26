#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 1;
	string	s;
	cin >> a >> b;
	if (a!=b)	for(i=1,ans=32;i<a-b;i++) ans *= 32; 

	cout << ans << endl;
	return 0;
}

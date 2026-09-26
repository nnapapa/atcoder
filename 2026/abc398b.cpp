#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	n = 7;
	map<ll,ll>	A;
	for(i=0;i<n;i++) {
		cin >> a;
		A[a]++;
	}
	a = b = 0;
	for(auto p : A) {
		if (p.second == 2) a++;
		if (p.second > 2) b++;
	}
	if (b>=2 || (b>=1 && a>=1)) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}

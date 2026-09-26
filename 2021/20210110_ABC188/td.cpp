#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,C;
	ll		ans = 0;
	string	s;
	cin >> n >> C;
	map<ll,ll>	A;
	for(i=0;i<n;i++) {
		cin >> a >> b >> c;
		A[a] += c;
		A[b+1] -= c;
	}
	ll preday = 0, precost = 0;
	for(auto p : A) {
		a = p.first; c = p.second;
		ans += (a - preday)*min(C,precost);
		precost = precost + c;
		preday = a;
	}

	cout << ans << endl;
	return 0;
}

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
	cin >> n;
	vector<ll>	p(n);
	for(i=0;i<n;i++) cin >> p[i];
	x = 0;
	vector<ll>	mi(200002,0);
	for(i=0;i<n;i++) {
			mi[p[i]] = 1;
			while(mi[x]==1) x++;
			cout << x << endl;
	}

	return 0;
}

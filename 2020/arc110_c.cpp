#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	string	s;
	cin >> n;
	vector<ll>	p(n+1), ans(n-1);
	for(i=1;i<=n;i++) cin >> p[i];
	a = 1;
	b = 0;
	for(i=1;i<=n;i++) {
		if (p[i]!=a) continue;
		for(j=i-1;j>=a;j--) {ans[b++]=j; swap(p[j],p[j+1]);}
		a = i;
	}

	bool f = true;
	for(i=1;i<=n;i++) if (p[i]!=i) f = false;
	if (b!=n-1 || !f) {
		//for(i=0;i<n;i++) cout << p[i+1] << " ";
		//cout << endl;
		cout << -1 << endl;
		return 0;
	}
	//for(i=0;i<n;i++) cout << p[i+1] << " ";
	//cout << endl;
	for(i=0;i<n-1;i++) cout << ans[i] << endl;
	return 0;
}

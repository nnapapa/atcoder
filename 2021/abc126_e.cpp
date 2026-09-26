#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	dsu d(n+1);
	//vector<int> A(n+1,1);
	for(i=0;i<m;i++) {
		cin >> x >> y >> z;
		//A[x] = A[y] = 0;
		d.merge(x,y);
	}
	//for(i=1;i<=n;i++) ans += A[i];
	vector<vector<int>> dg;
	dg = d.groups();
	//for(i=0;i<dg.size();i++) if (dg[i].size()>1) ans++;

	cout << dg.size()-1 << endl;
	return 0;
}

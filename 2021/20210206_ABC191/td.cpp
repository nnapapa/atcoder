#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<vector<ll>> ab(2001, vector<ll>(2001,INFL));
ll n,m;
int main() {
	ll		a,b,c,d,h,i,j,k,l,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	//vector<ll>	A(n);
	for(i=0;i<m;i++) {
		cin >> a >> b >> c;
		ab[a][b] = min(ab[a][b], c);
	}

	for()

	cout << ans << endl;
	return 0;
}

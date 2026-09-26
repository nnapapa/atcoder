#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string s = "Nothing";
ll n,k;
vector<vector<ll>>	t(5 , vector<ll>(5));
void calc(ll x,ll d) {
	if (x==n) return;
	for(int i=0;i<k;i++) {
		if (x==n-1) {
			if ((d^t[x][i])==0) s = "Found";
		}
		calc(x+1,d^t[x][i]);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,l,m,v,w,x,y,z;
	cin >> n >> k;
	for(i=0;i<n;i++) for(j=0;j<k;j++) cin >> t[i][j];
	calc(0,0);

	cout << s << endl;
	return 0;
}

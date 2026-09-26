#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,sx,sy,tx,ty;
	char	ans[50000];
	string s;

	cin >> sx >> sy >> tx >> ty;

	for(i=0;i<ty-sy;i++) s += 'U';
	for(i=0;i<tx-sx;i++) s += 'R';
	for(i=0;i<ty-sy;i++) s += 'D';
	for(i=0;i<=tx-sx;i++) s += 'L';
	for(i=0;i<=ty-sy;i++) s += 'U';
	for(i=0;i<=tx-sx;i++) s += 'R';
	s += 'D';
	s += 'R';
	for(i=0;i<=ty-sy;i++) s += 'D';
	for(i=0;i<=tx-sx;i++) s += 'L';
	s += 'U';

	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << s << endl;
	return 0;
}

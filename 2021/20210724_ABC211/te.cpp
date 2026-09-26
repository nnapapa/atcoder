#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<vector<ll>>	red(8 , vector<ll>(8,0));
void red0() {for(int i=0;i<8;i++) for(int j=0;j<8;j++) red[i][j] = 0;}
ll		ans = 0;
vector<string> S(8);
ll		n,k;
void check(ll i,ll j) {
	cout << "check " << i << " " << j << endl; 
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) cout << red[i][j] << " ";
		cout << endl;
	}
	bool f = true;
	for(ll i=0;i<n;i++) for(ll j=0;j<n;j++) if (S[i][j]=='#' && red[i][j]==1) f = false;
	if (f) ans++;
}
void dfs(ll i, ll j, ll count) {
	cout << "dfs " << i << " " << j <<" " << count << endl;
	if (count==k) { check(i,j); return; }
	for(ll x=i;x<n;x++) {
		for(ll y=j;y<n;y++) {
			if (red[x][y]!=0) continue;
			if (S[x][y]=='#') continue;
			if ((x>0 && red[x-1][y]==1) || (y>0 && red[x][y-1]==1)) {
				red[x][y] = 1;
				dfs(i,j,count+1);
				red[x][y] = 0;
			}
		}
	}
}
void calc(ll i, ll j) {
	red0();
	red[i][j] = 1;
	dfs(i,j,1);
}
int main() {
	ll		a,b,c,d,h,i,j,l,m,v,w,x,y,z;

	cin >> n >> k;
	
	for(i=0;i<n;i++) cin >> S[i];

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (S[i][j]!='#') calc(i,j);
		}
	}
 
	cout << ans << endl;
	return 0;
}

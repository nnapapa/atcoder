#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int jyanken( char a, char b) {
	//cout << "jyanken:" << a << ":" << b << endl;
	if (a==b) return 0;
	if (a=='G' && b=='P') return -1;
	if (a=='C' && b=='G') return -1;
	if (a=='P' && b=='C') return -1; 
	return 1;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;

	cin >> n >> m;

	vector<string>	A(2*n);
	for(i=0;i<2*n;i++) cin >> A[i];

	vector<pair<ll,ll>> ans(2*n);	// 順位、勝ち数、番号
	for(i=0;i<2*n;i++) ans[i] = make_pair(0,i);
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			a = 2*j;
			b = 2*j+1;
			c = jyanken(A[ans[a].second][i],A[ans[b].second][i]);
			if (c==1) ans[a].first--;
			if (c==-1) ans[b].first--;
		}
		sort(ans.begin(),ans.end());
		//for(j=0;j<2*n;j++) cout << ans[j].second+1 << "," << ans[j].first << " ";
		//cout << endl;		
	}
	for(j=0;j<2*n;j++) cout << ans[j].second+1 << endl;
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,s,v,w,x,y,z;

	cin >> n >> a >> b;
	cin >> p >> q >> r >> s;
	vector<vector<char>> ans(q-p+1, vector<char>(s-r+1,'.'));
	ll max1 = max(1-a,1-b);
	ll min1 = min(n-a,n-b);
	ll max2 = max(1-a,b-n);
	ll min2 = min(n-a,b-1);	
	
	for(i=p;i<=q;i++) {
		for(j=r;j<=s;j++) {
			k = i - a;
			if (k==j-b) {
				if ( (max1<=k) && (k<=min1) ) ans[a+k-p][b+k-r] = '#';
			}
			if (k==b-j) {
				if ( (max2<=k) && (k<=min2) ) ans[a+k-p][b-k-r] = '#';
			}
		}
	}
	for(i=0;i<q-p+1;i++) {
		for(j=0;j<s-r+1;j++) cout << ans[i][j];
		cout << endl;
	}
	return 0;
}

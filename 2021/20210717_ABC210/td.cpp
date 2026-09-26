#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = -1;
	string	s;
	cin >> h >> w >> c;

	vector<vector<ll>>	A(h , vector<ll>(w));
	vector<vector<ll>>	dp(h , vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> A[i][j];
	for(i=0;i<h;i++) {
		if (ans!=-1 && ans<c*i) break;
		for(j=0;j<w;j++) {
			if (ans!=-1 && ans<c*(i+j)) break;
			if (i==0 && j==0) continue;
			for(y=0;y<h-i;y++) {
				for(x=0;x<w-j;x++) {
					a = c*(i+j) + A[y][x] + A[y+i][x+j];
					if (ans==-1) ans = a;
					else ans = min(ans , a);
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}

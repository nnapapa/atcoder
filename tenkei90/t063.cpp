#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w;
	vector<vector<ll>>	P(h , vector<ll>(w));
	for(i=0;i<h;i++) for(j=0;j<w;j++) cin >> P[i][j];

	vector<ll> A(w);
	for(i=1;i<(1<<h);i++) {
		for(j=0;j<w;j++) A[j] = 0;
		x = i;
		y = 0;
		while(x>0) {
			if (x&1) {
				for(j=0;j<w;j++) {
					if (A[j]==0) A[j] = P[y][j];
					else if (A[j]==-1) continue;
					if (A[j]!=P[y][j]) A[j] = -1;
				}
			}
			x = x >> 1;
			y++;
		}
		sort(A.begin(),A.end());
		a = x = 0;
		for(j=0;j<w;j++) {
			if (A[j]==-1) continue;
			if (x==0||y!=A[j]) {
				a = max(a , x);
				y = A[j];
				x=1;
			} else x++;
		}
		a = max(a , x);
		a = a * __builtin_popcount(i);
		ans = max(ans , a);
	}

	cout << ans << endl;
	return 0;
}

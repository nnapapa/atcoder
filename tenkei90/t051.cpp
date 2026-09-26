#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,p,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k >> p;
	vector<ll>	A(n);
	for(i=0;i<n;i++) cin >> A[i];
	vector<vector<ll>> B(n+1),C(n+1);
	m = n / 2;
	for(i=0;i<(1<<m);i++) {
		a = __builtin_popcount(i);
		x = 0;
		y = 0;
		for(j=i;j>0;j=j>>1,y++) if (j&1) x += A[y];
		B[a].push_back(x);
	}

	for(i=0;i<(1<<(n-m));i++) {
		a = __builtin_popcount(i);
		x = 0;
		y = n/2;
		for(j=i;j>0;j=j>>1,y++) if (j&1) x += A[y];
		C[a].push_back(x);
	}

	for(i=0;i<=n;i++) if (B[i].size()) sort(B[i].begin(),B[i].end());
	for(i=0;i<=n;i++) if (C[i].size()) sort(C[i].begin(),C[i].end());
	/*
	cout << "B:" << endl;
	for(i=0;i<=n;i++) { for(j=0;j<B[i].size();j++) printf("%d ",B[i][j]); cout << endl; }
	cout << "C:" << endl;
	for(i=0;i<=n;i++) { for(j=0;j<C[i].size();j++) printf("%d ",C[i][j]); cout << endl; }
	*/
	for(i=0;i<=min(k,m);i++) {
		for(j=0;j<B[i].size();j++) {
			if (B[i][j]>p) break;

			ll left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
			ll right = C[k-i].size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

			while (right - left > 1) {
				ll mid = (left + right) / 2;
					if (p-B[i][j] < C[k-i][mid]) right = mid;
					else left = mid;
			}
			//cout << i << " " << j << " " << left+1 << endl;
			ans += left+1;
		}

	}
	cout << ans << endl;
	return 0;
}

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
	cin >> n >> m;
	vector<vector<ll>> C(50);
	vector<ll>	A(50);
	for(i=0;i<m;i++) {
		cin >> a >> b;
		C[a].push_back(b);
		C[b].push_back(a);
	}
	for(i=0;i<n;i++) {
		for(j=0;j<i;j++) {
			for(k=0;k<j;k++) {
				for(a=0;a<n;a++) A[a]=0;
				A[i] = A[j] = A[k] = 1;
				for(a=0;a<C[i].size();a++) A[C[i][a]] = 1;
				for(a=0;a<C[j].size();a++) A[C[j][a]] = 1;
				for(a=0;a<C[k].size();a++) A[C[k][a]] = 1;
				for(a=0,c=0;a<n;a++) c += A[a];
				if (ans<c) {
					x = i;
					y = j;
					z = k;
					ans = c;
				} 
			}
		}
	}

	cout << z << " " << y << " " << x << endl;
	return 0;
}

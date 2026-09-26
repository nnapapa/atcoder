#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,p,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s = "Yes";
	cin >> n >> m;
	vector<ll>	A(m),B(m),NB(n+1,0),CK(n+1,0);
	map<ll,vector<ll>> mp;
	for(i=0;i<m;i++) cin >> A[i] >> B[i];
	for(i=0;i<m;i++) {
		if (++NB[A[i]] >2) s = "No";
		if (++NB[B[i]] >2) s = "No";
		mp[A[i]].push_back(B[i]);
		mp[B[i]].push_back(A[i]);
	}
	if (s == "No") {
		cout << s << endl;
		return 0;
	}
	for(i=1;i<=n;i++) {
		if (CK[i]==0) {
			CK[i] = 1;
			a = i;
			if (NB[a]>=1) {
				b = 0;
				while(1) {
					if (CK[mp[a][b]]) {s = "No"; break;}
					p = a;
					a = mp[a][b];
					CK[a] = 1;
					if (NB[a]==1) break;
					else {
						if (mp[a][0]==p) b = 1;
						else b = 0;
					}
				}
			}
			a = i;
			if (NB[a]==2) {
				b = 1;
				while(1) {
					if (CK[mp[a][b]]) {s = "No"; break;}
					p = a;
					a = mp[a][b];
					CK[a] = 1;
					if (NB[a]==1) break;
					else {
						if (mp[a][0]==p) b = 1;
						else b = 0;
					}
				}

			}
		} else continue;
	}
	cout << s << endl;
	return 0;
}
